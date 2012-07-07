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
    //about window
    this->aboutWindow = new AboutWindow();
    this->aboutWindow->hide();
    this->aboutWindow->move(this->geometry().center()-this->aboutWindow->geometry().center());
    //gl widget
    this->glWidget = new GlWidget(ui->widget);
    ui->widget->layout()->addWidget(this->glWidget);
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
    //connect monit temp checkbox
    connect(ui->monitTempChck, SIGNAL(toggled(bool)), printerObj, SLOT(setMonitorTemperature(bool)),Qt::QueuedConnection);
    //connect printer to temp widget
    connect(printerObj, SIGNAL(currentTemp(double,double,double)), this, SLOT(drawTemp(double,double,double)));
    connect(printerObj, SIGNAL(progress(int)), this, SLOT(updateProgress(int)));
    //updating head position in ui
    connect(printerObj, SIGNAL(currentPosition(QVector3D)), this, SLOT(updateHeadPosition(QVector3D)));
    //connect z slider
    connect(ui->zSlider, SIGNAL(valueChanged(int)), this, SLOT(moveZ(int)));
    connect(ui->zSlider, SIGNAL(sliderMoved(int)), this, SLOT(updateZ(int)));

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
    //connect temperature buttons
    connect(ui->t1Btn, SIGNAL(toggled(bool)), this, SLOT(setTemp1(bool)));
    connect(ui->t2Btn, SIGNAL(toggled(bool)), this, SLOT(setTemp2(bool)));
    connect(ui->hbBtn, SIGNAL(toggled(bool)), this, SLOT(setTemp3(bool)));
    //connecting layer scroll bar
    connect(ui->layerScrollBar, SIGNAL(valueChanged(int)), this, SLOT(setLayers(int)));
    //connecting travel moves checkbox
    connect(ui->showTravelChkBox, SIGNAL(toggled(bool)),this->glWidget, SLOT(showTravel(bool)));
    //disable steppers btn
    connect(ui->disableStpBtn, SIGNAL(clicked()), printerObj, SLOT(disableSteppers()), Qt::QueuedConnection);
    //connect head move widget
    connect(this->controlWidget, SIGNAL(clicked(QPoint)), this, SLOT(moveHead(QPoint)));
    connect(this->controlWidget, SIGNAL(hovered(QPoint)), this, SLOT(updateHeadGoToXY(QPoint)));

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
    ui->widget_10->hide();
    //restore user settings
    restoreSettings();
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
    //connecting to printer port
    QMetaObject::invokeMethod(printerObj,"connectPort",Qt::QueuedConnection,Q_ARG(QString, ui->portCombo->currentText()),Q_ARG(int,ui->baudCombo->itemData(ui->baudCombo->currentIndex()).toInt()));
}

//loading file
void MainWindow::loadFile(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"), this->lastOpendDir, tr("Print files (*.g *.gcode)"));
    //show filename in ui
    ui->fileNameLbl->setText(fileName.right(fileName.length()-fileName.lastIndexOf("/")-1));
    //open file
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    //set last opend dir
    this->lastOpendDir=fileName.left(fileName.lastIndexOf("/"));

    //clear last object gcode
    this->gcodeLines.clear();
    //clear gl widget
    this->glWidget->clearObjects();
    //show progress dialog
    QProgressDialog progress(tr("Parsing file"), 0, 0, 0, this);
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
    ui->layerScrollBar->setValue(layerCount);

    ui->progressBar->setMaximum(this->gcodeLines.size());
    this->glWidget->setLayers(layerCount);
    this->glWidget->addObject(tempObject);

    //enable print button
    ui->printBtn->setEnabled(true);
    ui->statusBar->showMessage(tr("File loaded"), 2000);
    ui->layersLbl->setText(QString::number(layerCount));
    //disable pause btn
    ui->pauseBtn->setEnabled(false);
    ui->pauseBtn->blockSignals(true);
    ui->pauseBtn->setChecked(false);
    ui->pauseBtn->blockSignals(false);
    ui->pauseBtn->setText(tr("Pause"));
}

//printing object
void MainWindow::startPrint(){
    if(printerObj->isConnected()){
        this->startTime=QTime::currentTime();
        ui->inConsole->appendPlainText(tr(QString("Print started at "+ this->startTime.toString("hh:mm:ss")).toAscii()));
        QMetaObject::invokeMethod(printerObj,"loadToBuffer",Qt::QueuedConnection,Q_ARG(QStringList, this->gcodeLines), Q_ARG(bool, true));
        ui->progressBar->setMaximum(this->gcodeLines.size());
        QMetaObject::invokeMethod(printerObj,"startPrint",Qt::QueuedConnection);
        ui->pauseBtn->setEnabled(true);
    }
}

//setting layers displayed
void MainWindow::setLayers(int layers){
    this->glWidget->setLayers(layers);
    qDebug() << layers;
}

//slot to connect diffrent signals
void MainWindow::moveHead(QPoint point){
    QMetaObject::invokeMethod(printerObj,"moveHead",Qt::QueuedConnection,Q_ARG(QPoint, point),Q_ARG(int, ui->speedSpinBox->value()));
    ui->yAt->setText("Y: "+QString::number(200-point.y()));
    ui->xAt->setText("X: "+QString::number(point.x()));
}

//pausing print

void MainWindow::pausePrint(bool pause){
    if(pause){
        ui->pauseBtn->setText(tr("Resume"));
        QMetaObject::invokeMethod(printerObj,"stopPrint",Qt::QueuedConnection);
    }
    else{
        ui->pauseBtn->setText(tr("Pause"));
        QMetaObject::invokeMethod(printerObj,"startPrint",Qt::QueuedConnection);
    }
}

//draw temp on graph

void MainWindow::drawTemp(double t1, double t2, double hb){
    this->graphWidget->addMeasurment(t1,t2,hb);
    ui->t1Label->setText(QString::number(t1)+" Â°C");
    ui->t3Label->setText(QString::number(hb)+" Â°C");
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


void MainWindow::setTemp1(bool on){
    bool ok;
    int value = ui->t1Combo->currentText().toInt(&ok)%300;
    if(ok){
        if(on){
            ui->t1Btn->setText("Off");
            this->graphWidget->setTargets(value,-1,-1);
            QMetaObject::invokeMethod(printerObj,"setTemp1",Qt::QueuedConnection,Q_ARG(int, value));
        }
        else{
            ui->t1Btn->setText("On");
            this->graphWidget->setTargets(0,-1,-1);
            QMetaObject::invokeMethod(printerObj,"setTemp1",Qt::QueuedConnection,Q_ARG(int, 0));
        }
    }
}

void MainWindow::setTemp2(bool on){
    if(on){
        ui->t2Btn->setText("Off");
        this->graphWidget->setTargets(-1,200,-1);
    }
    else{
        ui->t2Btn->setText("On");
        this->graphWidget->setTargets(-1,0,-1);
    }
}

void MainWindow::setTemp3(bool on){
    bool ok;
    int value = ui->hbCombo->currentText().toInt(&ok)%300;
    if(ok){
        if(on){
            ui->hbBtn->setText("Off");
            this->graphWidget->setTargets(-1,-1,value);
            QMetaObject::invokeMethod(printerObj,"setTemp3",Qt::QueuedConnection,Q_ARG(int, value));
        }
        else{
            ui->hbBtn->setText("On");
            this->graphWidget->setTargets(-1,-1,0);
            QMetaObject::invokeMethod(printerObj,"setTemp3",Qt::QueuedConnection,Q_ARG(int, 0));
        }
    }
}


void MainWindow::moveZ(int value){
    ui->zMoveTo->setText("Z: "+QString::number(0));
    QMetaObject::invokeMethod(printerObj,"moveHeadZ",Qt::QueuedConnection,Q_ARG(double, (double)value),Q_ARG(int, ui->speedZSpinBox->value()));
}

void MainWindow::updateZ(int value){
    ui->zMoveTo->setText("Z: "+QString::number(value));
}

void MainWindow::on_actionO_Programie_triggered()
{
    this->aboutWindow->showOnXY(QPoint(this->geometry().center().x()-this->aboutWindow->width()/2,this->geometry().center().y()-this->aboutWindow->height()/2));
}

void MainWindow::updateHeadPosition(QVector3D point){
    ui->xAt->setText("X: "+QString::number(point.x()));
    ui->yAt->setText("Y: "+QString::number(point.y()));
    ui->zAt->setText("Z: "+QString::number(point.z()));
}

void MainWindow::updateHeadGoToXY(QPoint point){
    ui->xMoveTo->setText("X: "+QString::number(point.x()));
    ui->yMoveTo->setText("Y: "+QString::number(200-point.y()));
}


//main windows close event
void MainWindow::closeEvent(QCloseEvent *event)
{
    qDebug() << "closing";
    saveSettings();
}


//saving and restoring setting

void MainWindow::saveSettings(){
    QSettings settings("3d-printers", "yarrh");
    settings.clear();
    settings.setValue("lastDir", this->lastOpendDir);
    settings.setValue("XYspeed",ui->speedSpinBox->value());
    settings.setValue("Zspeed",ui->speedZSpinBox->value());
    settings.setValue("mainWindowPos", this->pos());
    settings.setValue("mainWindowSize",this->size());
    //write temperature setting
    settings.beginWriteArray("temp1Values");
    for(int i=0; i<ui->t1Combo->count(); i++){
        settings.setArrayIndex(i);
        settings.setValue("value",ui->t1Combo->itemText(i));
        settings.setValue("isSelected", i==ui->t1Combo->currentIndex());
    }
    settings.endArray();

    settings.beginWriteArray("temp3Values");
    for(int i=0; i<ui->hbCombo->count(); i++){
        settings.setArrayIndex(i);
        settings.setValue("value",ui->hbCombo->itemText(i));
        settings.setValue("isSelected", i==ui->hbCombo->currentIndex());
    }
    settings.endArray();

    settings.sync();
}

void MainWindow::restoreSettings(){
    QSettings settings("3d-printers", "yarrh");
    this->lastOpendDir = settings.value("lastDir","").toString();
    ui->speedSpinBox->setValue(settings.value("XYspeed").toInt());
    ui->speedZSpinBox->setValue(settings.value("Zspeed").toInt());
    this->move(settings.value("mainWindowPos").toPoint());
    this->resize(settings.value("mainWindowSize").toSize());

    //restore temp1 combo
    int size = settings.beginReadArray("temp1Values");
    int currentIndex=0;
    for (int i = 0; i < size; ++i) {
        settings.setArrayIndex(i);
        ui->t1Combo->addItem(settings.value("value").toString());
        if(settings.value("isSelected").toBool()){
            currentIndex=i;
        }
    }
    ui->t1Combo->setCurrentIndex(currentIndex);
    settings.endArray();
    //restore temp1 combo
    size = settings.beginReadArray("temp3Values");
    currentIndex=0;
    for (int i = 0; i < size; ++i) {
        settings.setArrayIndex(i);
        ui->hbCombo->addItem(settings.value("value").toString());
        if(settings.value("isSelected").toBool()){
            currentIndex=i;
        }
    }
    ui->hbCombo->setCurrentIndex(currentIndex);
    settings.endArray();

}

//writing command to console
void MainWindow::on_outLine_returnPressed()
{

}
