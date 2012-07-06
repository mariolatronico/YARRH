#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setting string codecs
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName ("UTF-8"));
    //gl widget
    this->glWidget = new GlWidget(ui->widget);
    ui->widget->layout()->addWidget(this->glWidget);
    QThread *glThread = new QThread();
    //graph widget
    this->graphWidget = new GraphWidget(ui->tempGraphWidget);
    ui->tempGraphWidget->layout()->addWidget(this->graphWidget);
    //graphics view for head movement
    this->controlWidget = new headControl(ui->headControlWidget);
    ui->headControlWidget->layout()->addWidget(this->controlWidget);

    //setting up printer and its thread
    this->printerObj = new Printer();
    QThread *qthread = new QThread();

    //connecting ui to printer
    connect(printerObj, SIGNAL(write_to_console(QString)), ui->inConsole, SLOT(appendPlainText(QString)), Qt::QueuedConnection);
    connect(ui->fanSpinBox, SIGNAL(valueChanged(int)), printerObj, SLOT(setFan(int)), Qt::QueuedConnection);
    //connecting move btns
    connect(ui->homeX, SIGNAL(clicked()), printerObj, SLOT(homeX()), Qt::QueuedConnection);
    connect(ui->homeY, SIGNAL(clicked()), printerObj, SLOT(homeY()), Qt::QueuedConnection);
    connect(ui->homeZ, SIGNAL(clicked()), printerObj, SLOT(homeZ()), Qt::QueuedConnection);
    connect(ui->homeAll, SIGNAL(clicked()), printerObj, SLOT(homeAll()), Qt::QueuedConnection);
    //disable steppers
    connect(ui->disableStpBtn, SIGNAL(clicked()), printerObj, SLOT(disableSteppers()), Qt::QueuedConnection);
    //connect head move widget
    connect(this->controlWidget, SIGNAL(clicked(QPoint)), this, SLOT(moveHead(QPoint)), Qt::QueuedConnection);
    //connect monit temp checkbox
    connect(ui->monitTempChck, SIGNAL(toggled(bool)), printerObj, SLOT(setMonitorTemperature(bool)),Qt::QueuedConnection);
    //connect printer to temp widget
    connect(printerObj, SIGNAL(currentTemp(double,double,double)), this, SLOT(drawTemp(double,double,double)));
    connect(printerObj, SIGNAL(progress(int)), this, SLOT(updateProgress(int)));

    printerObj->moveToThread(qthread);
    qthread->start(QThread::HighestPriority);


    this->portEnum = new QextSerialEnumerator(this);
    this->portEnum->setUpNotifications();
    QList<QextPortInfo> ports = this->portEnum->getPorts();
    //finding avalible ports
    foreach (QextPortInfo info, ports) {
        ui->portCombo->addItem(info.portName);
    }

    //connectiong signals
    connect(this->portEnum, SIGNAL(deviceDiscovered(const QextPortInfo &)), this, SLOT(deviceConnected(const QextPortInfo &)));
    connect(this->portEnum, SIGNAL(deviceDiscovered(const QextPortInfo &)), this, SLOT(deviceConnected(const QextPortInfo &)));

    //connect btn
    connect(ui->connectBtn, SIGNAL(clicked()), this, SLOT(connectClicked()));
    //print btn
    connect(ui->printBtn,SIGNAL(clicked()), this, SLOT(startPrint()));
    //pause btn
    connect(ui->pauseBtn, SIGNAL(toggled(bool)), this, SLOT(pausePrint(bool)));
    //connecting menu actions
    connect(ui->actionWczytaj, SIGNAL(triggered()), this, SLOT(loadFile()));

    //connecting layer scroll bar
    connect(ui->layerScrollBar, SIGNAL(valueChanged(int)), this, SLOT(setLayers(int)));
    //connecting travel moves checkbox
    connect(ui->showTravelChkBox, SIGNAL(toggled(bool)),this->glWidget, SLOT(showTravel(bool)));

    ui->printBtn->setDisabled(true);
    ui->pauseBtn->setDisabled(true);
    ui->baudCombo->addItem("1200", BAUD1200);
    ui->baudCombo->addItem("2400", BAUD2400);
    ui->baudCombo->addItem("4800", BAUD4800);
    ui->baudCombo->addItem("9600", BAUD9600);
    ui->baudCombo->addItem("19200", BAUD19200);
    ui->baudCombo->addItem("38400", BAUD38400);
    ui->baudCombo->addItem("57600", BAUD57600);
    ui->baudCombo->addItem("115200", BAUD115200);
    ui->baudCombo->setCurrentIndex(7);
    qDebug() << "parent" << QThread::currentThreadId();
}

MainWindow::~MainWindow()
{
    delete ui;
}


//not working on windows... dunno why :(
void MainWindow::deviceConnected(const QextPortInfo & info){
    qDebug() << info.portName;
}

void MainWindow::deviceDisconnected(const QextPortInfo & info){
    qDebug() << info.portName;
}


//connecting to port
void MainWindow::connectClicked(){
    //connecting to printer port and starting printer thread
    QMetaObject::invokeMethod(printerObj,"connectPort",Qt::QueuedConnection,Q_ARG(QString, ui->portCombo->currentText()),Q_ARG(int,ui->baudCombo->itemData(ui->baudCombo->currentIndex()).toInt()));
}

//loading file
void MainWindow::loadFile(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Otwórz plik"), "", tr("Pliki do druku (*.g *.gcode)"));
    //show filename in ui
    ui->fileNameLbl->setText(fileName.right(fileName.length()-fileName.lastIndexOf("/")-1));
    //open file
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    //show progress dialog
    QProgressDialog progress(tr("Parsowanie pliku"), 0, 0, 0, this);
    progress.setWindowModality(Qt::WindowModal);
    progress.show();

    //buffer filecontent
    this->fileContent.clear();
    this->fileContent=file.readAll();
    file.close();

    //split buffer to lines
    QStringList gcodesTemp=this->fileContent.split("\n");
    QString temp;
    //set max value of progress dialog
    progress.setMaximum(gcodesTemp.size());

    //parsing input file
    qreal x=0,y=0,z=-1, travel=0;
    GCodeObject* tempObject = new GCodeObject(this->glWidget);
    int layerCount=0;
    float prevZ=0;
    for(int i=0; i<gcodesTemp.size(); i++){
        progress.setValue(i);
        temp=gcodesTemp.at(i);
        temp.replace("/n","");
        if(temp.contains("filament used")){
            ui->filamentLbl->setText(temp.right(temp.length()-temp.lastIndexOf("=")-2));
        }
        temp=temp.left(temp.lastIndexOf(";"));
        temp=temp.trimmed();
        if(temp!=""){
            this->gcodeLines.append(temp);
        }

        //parsing lines to get point coordinates
        if(temp.contains("X")){
            x=(qreal)temp.mid(temp.indexOf("X")+1,temp.indexOf(" ",temp.indexOf("X"))-temp.indexOf("X")).toFloat();
        }
        if(temp.contains("Y")){
            y=(qreal)temp.mid(temp.indexOf("Y")+1,temp.indexOf(" ",temp.indexOf("Y"))-temp.indexOf("Y")).toFloat();
        }
        if(temp.contains("Z")){
            z=(qreal)temp.mid(temp.indexOf("Z")+1,temp.indexOf(" ",temp.indexOf("Z"))-temp.indexOf("Z")).toFloat();
            if(z>prevZ){
                layerCount++;
            }
            prevZ=z;
        }
        if(temp.contains("X") || temp.contains("Y") || temp.contains("Z")){
            if(temp.contains("E")){
                travel=0;
            }
            else{
                travel=1;
            }
            tempObject->addVertex(x,y,z,travel,layerCount);
        }
    }
    ui->layerScrollBar->setMaximum(layerCount);
    ui->progressBar->setMaximum(this->gcodeLines.size());
    this->glWidget->setLayers(layerCount);
    this->glWidget->addObject(tempObject);

    //enable print button
    ui->printBtn->setEnabled(true);
    ui->statusBar->showMessage(tr("Wczytano plik"), 2000);
    ui->layersLbl->setText(QString::number(layerCount));
}

//printing object
void MainWindow::startPrint(){
    if(printerObj->isConnected()){
        this->startTime=QTime::currentTime();
        ui->inConsole->appendPlainText("Wydruk rozpoczęty o "+ this->startTime.toString("hh:mm:ss"));
        QMetaObject::invokeMethod(printerObj,"loadToBuffer",Qt::QueuedConnection,Q_ARG(QStringList, this->gcodeLines));
        ui->progressBar->setMaximum(this->gcodeLines.size());
        this->gcodeLines.clear();
        QMetaObject::invokeMethod(printerObj,"startPrint",Qt::QueuedConnection);
        ui->pauseBtn->setEnabled(true);
    }
}

//setting layers displayed
void MainWindow::setLayers(int layers){
    this->glWidget->setLayers(layers);
}

//slot to connect diffrent signals
void MainWindow::moveHead(QPoint point){
    QMetaObject::invokeMethod(printerObj,"moveHead",Qt::QueuedConnection,Q_ARG(QPoint, point),Q_ARG(int, ui->speedSpinBox->value()));
}

//pausing print

void MainWindow::pausePrint(bool pause){
    if(pause){
        ui->pauseBtn->setText("Wznów");
        QMetaObject::invokeMethod(printerObj,"stopPrint",Qt::QueuedConnection);
    }
    else{
        ui->pauseBtn->setText("Pauza");
        QMetaObject::invokeMethod(printerObj,"startPrint",Qt::QueuedConnection);
    }
}

//draw temp on graph

void MainWindow::drawTemp(double t1, double t2, double hb){
    this->graphWidget->addMeasurment(t1,t2,hb);
}

//update print progress
void MainWindow::updateProgress(int progress){
    ui->progressBar->setValue(ui->progressBar->maximum()-progress);
    //calculating ETA
    this->durationTime=QTime(0,0,0);
    this->durationTime=this->durationTime.addSecs(startTime.secsTo(QTime::currentTime()));
    float linesPerSec=(float)ui->progressBar->value()/(float)startTime.secsTo(QTime::currentTime());
    this->eta=QTime(0,0,0).addSecs((int)((float)progress/linesPerSec));
    ui->progressBar->setFormat(this->durationTime.toString("hh:mm:ss")+"/"+this->eta.toString("hh:mm:ss")+" %p%");
}
