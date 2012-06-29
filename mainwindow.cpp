#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //gl widget
    this->glWidget = new GlWidget(ui->widget);
    ui->widget->layout()->addWidget(this->glWidget);
    //graph widget
    this->graphWidget = new GraphWidget(ui->tempGraphWidget);
    ui->tempGraphWidget->layout()->addWidget(this->graphWidget);
    //graphics view for head movement
    this->controlWidget = new headControl(ui->headControlWidget);
    ui->headControlWidget->layout()->addWidget(this->controlWidget);

    //test path for temperature graph
    Path* temp1 = new Path();
    temp1->addPoint(QPoint(0,0));
    temp1->addPoint(QPoint(60,250));
    this->graphWidget->addPath(temp1);

    //port object
    PortSettings settings = {BAUD9600, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
    this->portObj = new QextSerialPort("",settings,QextSerialPort::EventDriven);

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName ("UTF-8"));

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


    connect(ui->connectBtn, SIGNAL(clicked()), this, SLOT(connectClicked()));
    connect(ui->outLine, SIGNAL(returnPressed()), this, SLOT(writeToPort()));
    connect(ui->printBtn,SIGNAL(toggled(bool)), this, SLOT(printObject(bool)));

    //connecting menu actions
    connect(ui->actionWczytaj, SIGNAL(triggered()), this, SLOT(loadFile()));

    //connecying layer scroll bar
    connect(ui->layerScrollBar, SIGNAL(valueChanged(int)), this, SLOT(setLayers(int)));

    //connect head move widget
    connect(this->controlWidget, SIGNAL(clicked(QPoint)), this, SLOT(moveHead(QPoint)));
    //connect fan spin box
    connect(ui->fanSpinBox, SIGNAL(valueChanged(int)), this, SLOT(setFan(int)));
    ui->printBtn->setDisabled(true);
    //connecting move btns
    connect(ui->homeX, SIGNAL(clicked()), this, SLOT(homeX()));
    connect(ui->homeY, SIGNAL(clicked()), this, SLOT(homeY()));
    connect(ui->homeZ, SIGNAL(clicked()), this, SLOT(homeZ()));
    connect(ui->homeAll, SIGNAL(clicked()), this, SLOT(homeAll()));
    ui->baudCombo->addItem("1200", BAUD1200);
    ui->baudCombo->addItem("2400", BAUD2400);
    ui->baudCombo->addItem("4800", BAUD4800);
    ui->baudCombo->addItem("9600", BAUD9600);
    ui->baudCombo->addItem("19200", BAUD19200);
    ui->baudCombo->addItem("38400", BAUD38400);
    ui->baudCombo->addItem("57600", BAUD57600);
    ui->baudCombo->addItem("115200", BAUD115200);
    ui->baudCombo->setCurrentIndex(7);
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
    ui->inConsole->appendPlainText(tr("łącze..."));
    if(ui->portCombo->currentText()!=""){
        PortSettings settings = {BAUD9600, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
        this->portObj = new QextSerialPort(ui->portCombo->currentText(),settings,QextSerialPort::EventDriven);

        this->portObj->setBaudRate((BaudRateType)ui->baudCombo->itemData(ui->baudCombo->currentIndex()).toInt());

        if(this->portObj->open(QIODevice::ReadWrite)){
            ui->inConsole->appendPlainText(tr("Drukarka połączona"));
            connect(this->portObj, SIGNAL(readyRead()), this, SLOT(readFromPort()));
        }
        else{
           ui->inConsole->appendPlainText(tr("Nie udało się połączyć"));
        }
    }
}

//writing to port
void MainWindow::writeToPort(){
    ui->inConsole->appendPlainText(ui->outLine->text());
    qDebug() << portObj->write(ui->outLine->text().toUpper().toLatin1()+"\n\r");
    ui->outLine->clear();
}

//sendind single line to port
void MainWindow::sendLine(QString line){
    portObj->write(line.toUpper().toLatin1()+"\n\r");
}

//reading from port
void MainWindow::readFromPort(){
    QString buffer;
    buffer=portObj->readAll();
    buffer.replace("\n","");
    buffer.replace("\r","");
    //ui->inConsole->appendPlainText(buffer);

    //if we are printing then continue
    if(buffer.contains("ok") && ui->printBtn->isChecked()){
        if(this->gcodeLines.size()>0){
            sendLine(this->gcodeLines.takeFirst());
            ui->progressBar->setValue(ui->progressBar->maximum()-this->gcodeLines.size());
            //calculating ETA
            this->durationTime=QTime(0,0,0);
            this->durationTime=this->durationTime.addSecs(startTime.secsTo(QTime::currentTime()));
            qDebug() << this->durationTime;
            float linesPerSec=(float)ui->progressBar->value()/(float)startTime.secsTo(QTime::currentTime());
            qDebug() << (float)this->gcodeLines.size()/linesPerSec;
            this->eta=QTime(0,0,0).addSecs((int)((float)this->gcodeLines.size()/linesPerSec));
            ui->progressBar->setFormat(this->durationTime.toString("hh:mm:ss")+"/"+this->eta.toString("hh:mm:ss")+" %p%");
        }
        else{
            ui->inConsole->appendPlainText(tr("Wydruk zakończony"));
        }
    }
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
    qreal x=0,y=0,z=-1;
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
            qDebug() << z;
            if(z>prevZ){
                layerCount++;
            }
            prevZ=z;
        }
        if(temp.contains("X") || temp.contains("Y") || temp.contains("Z")){
            tempObject->addVertex(x,y,z,layerCount);
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
void MainWindow::printObject(bool status){
    if(ui->printBtn->isChecked()==true){
        ui->printBtn->setText("Pauza");
        this->startTime=QTime::currentTime();
        ui->inConsole->appendPlainText("Wydruk rozpoczęty o "+ this->startTime.toString("hh:mm:ss"));

        if(this->portObj->isReadable()){
            sendLine(gcodeLines.takeFirst());
            ui->progressBar->setValue(ui->progressBar->maximum()-this->gcodeLines.size());
            qDebug() << ui->progressBar->maximum()-this->gcodeLines.size();
        }
        else{
            ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
        }
    }
    else{
        ui->printBtn->setText(tr("Drukuj"));
        ui->inConsole->appendPlainText(tr("Wydruk wstrzymany"));
    }
}


//homing axis
void MainWindow::homeX(){
    if(this->portObj->isReadable()){
        sendLine("G28 X0");
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}

void MainWindow::homeY(){
    if(this->portObj->isReadable()){
        sendLine("G28 Y0");
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}
void MainWindow::homeZ(){
    if(this->portObj->isReadable()){
        sendLine("G28 Z0");
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}
void MainWindow::homeAll(){
    if(this->portObj->isReadable()){
        sendLine("G28 X0 Y0 Z0");
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}

//moving head
void MainWindow::moveHead(QPoint point){
    if(this->portObj->isReadable()){
        sendLine("G1 F"+QString::number(ui->speedSpinBox->value()));
        sendLine("G1 X"+QString::number(point.x())+" Y"+QString::number(200-point.y()));
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}

//setting layers displayed
void MainWindow::setLayers(int layers){
    this->glWidget->setLayers(layers);
}

//setting fan speed
void MainWindow::setFan(int percent){
    float value=255*((float)percent/(float)100);
    qDebug() << QString::number((int)value);
    if(this->portObj->isReadable()){
        sendLine("M106 S"+QString::number((int)value));
    }
    else{
        ui->inConsole->appendPlainText(tr("Drukarka niepołaczona"));
    }
}
