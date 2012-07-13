#include "printer.h"

Printer::Printer(QObject *parent)
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName ("UTF-8"));
    PortSettings settings = {BAUD9600, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
    this->portObj = new QextSerialPort("",settings);
    this->isPrinting=false;
    this->temperatureTimer = new QTimer(this);
    connect(temperatureTimer, SIGNAL(timeout()), this, SLOT(getTemperature()));
    curr_pos.setX(0);
    curr_pos.setY(0);
    curr_pos.setZ(0);
    last_bed_temp = 0;
    last_head_temp = 0;
    inBuffer.clear();
    responseBuffer.clear();
}

bool Printer::isConnected(){
    return this->portObj->isReadable();
}

bool Printer::getIsPrinting(){
    return this->isPrinting;
}


bool Printer::connectPort(QString port, int baud){
    emit write_to_console(tr("Connecting..."));
    if(port!=""){
        PortSettings settings = {(BaudRateType)baud, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
        this->portObj = new QextSerialPort(port,settings,QextSerialPort::EventDriven);
        if(this->portObj->open(QIODevice::ReadWrite | QIODevice::Unbuffered)){
            emit write_to_console(tr("Printer connected"));
            connect(this->portObj, SIGNAL(readyRead()), this, SLOT(readFromPort()));
            connect(this, SIGNAL(newResponce(QString)), this, SLOT(processResponce(QString)));
            emit connected(true);
            return true;
        }
        else{
           emit write_to_console(tr("Unable to connect"));
           emit connected(false);
           return false;
        }
    }
    else{
        emit write_to_console(tr("Unknown port name"));
        emit connected(false);
        return false;
    }
}

bool Printer::disconnectPort(){
    this->portObj->close();
    emit write_to_console(tr("Printer disconnected"));
    emit connected(false);
    return true;
}

//writing to port
int Printer::writeToPort(QString command){
    //analizing command for position tracking
    QStringList args=command.split(" ");
    for(int i=0 ;i <args.size(); i++){
        if(args.at(i).contains("X"))
            curr_pos.setX(args.at(i).mid(1).toDouble());
        if(args.at(i).contains("Y"))
            curr_pos.setY(args.at(i).mid(1).toDouble());
        if(args.at(i).contains("Z"))
            curr_pos.setZ(args.at(i).mid(1).toDouble());
    }
    if(command.contains("M104") || command.contains("M109")){
        emit settingTemp1(command.mid(command.lastIndexOf("S")+1,command.length()-command.lastIndexOf("S")+1).toDouble());
    }
    if(command.contains("M140") || command.contains("M190")){
        emit settingTemp3(command.mid(command.lastIndexOf("S")+1,command.length()-command.lastIndexOf("S")+1).toDouble());
    }
    emit currentPosition(curr_pos);

    if(this->isConnected()){
        portObj->write(command.toLatin1()+"\n");
    }
    else{
        write_to_console(tr("Printer offline"));
        return -1;
    }
}

//reading from port, we want to be here as short as posible
void Printer::readFromPort(){
    emit newResponce(portObj->readAll());
}

//proper parsing of responce
void Printer::processResponce(QString responce){
    //add data to buffer
    inBuffer.append(responce);

    //send full responces to fifo
    responseBuffer.append(inBuffer.left(inBuffer.lastIndexOf("\n")+1).split("\n",QString::SkipEmptyParts));
    qDebug() << inBuffer;
    //clear buffer
    inBuffer.remove(0,inBuffer.lastIndexOf("\n")+1);

    //proccess all responces from fifo
    while(responseBuffer.size()>0){
        QString lastResponse=responseBuffer.takeFirst();
        //if its temp status
        if(lastResponse.contains("T:") || lastResponse.contains("B:")){
            bool ok;

            double bed_temp = lastResponse.mid(lastResponse.indexOf("B:")+2,lastResponse.indexOf(".",lastResponse.indexOf("B:"))-lastResponse.indexOf("B:")+2).toDouble(&ok);
            if(ok){
                last_bed_temp=bed_temp;
            }
            double head_temp = lastResponse.mid(lastResponse.indexOf("T:")+2,lastResponse.indexOf(".",lastResponse.indexOf("T:"))-lastResponse.indexOf("T:")+2).toDouble(&ok);
            if(ok){
                last_head_temp=head_temp;
            }

            emit currentTemp(last_head_temp,0.0,last_bed_temp);
        }
        //if its response for position command
        else{
            //if we are printing then continue
            if(lastResponse.contains("ok")){
                    if(this->gCodeBuffer.size()>0 && this->isPrinting){
                        writeToPort(this->gCodeBuffer.takeFirst());
                        emit progress(this->gCodeBuffer.size());
                    }
            }
            else{
                write_to_console(lastResponse);
            }
        }
    }
}

//slot starting print
void Printer::startPrint(){
    this->isPrinting=true;
    writeToPort(this->gCodeBuffer.takeFirst());
}

//slot stoping print
void Printer::stopPrint(){
    this->isPrinting=false;
}

//homing axis
void Printer::homeX(){
    writeToPort("G28 X0");
    curr_pos.setX(0);
}

void Printer::homeY(){
    writeToPort("G28 Y0");
    curr_pos.setY(0);
}
void Printer::homeZ(){
    writeToPort("G28 Z0");
    curr_pos.setZ(0);
}
void Printer::homeAll(){
    writeToPort("G28 X0 Y0 Z0");
    curr_pos.setX(0);
    curr_pos.setY(0);
    curr_pos.setZ(0);
}

//moving head
void Printer::moveHead(QPoint point, int speed){
    writeToPort("G1 F"+QString::number(speed));
    writeToPort("G1 X"+QString::number(point.x())+" Y"+QString::number(200-point.y()));
}
void Printer::moveHeadZ(double z, int speed){
    writeToPort("G1 F"+QString::number(speed));
    writeToPort("G1 Z"+QString::number(z));
}

//setting fan speed
void Printer::setFan(int percent){
    float value=255*((float)percent/(float)100);
    writeToPort("M106 S"+QString::number((int)value));
}
//disable stepper
void Printer::disableSteppers(){
    writeToPort("M18");
}

//adding data to printer buffer
void Printer::loadToBuffer(QStringList buffer, bool clear){
    if(clear){
        this->gCodeBuffer.clear();
    }
    this->gCodeBuffer.append(buffer);
}

void Printer::setMonitorTemperature(bool monitor){
    this->monitorTemperature=monitor;
    if(monitor){
        this->temperatureTimer->start(2000);
    }
    else{
        this->temperatureTimer->stop();
    }
}

void Printer::getTemperature(){
    if(this->isConnected()){
        writeToPort("M105");
    }
}

void Printer::setTemp1(int temp){
    writeToPort("M104 S"+QString::number(temp));
}

void Printer::setTemp3(int temp){
    writeToPort("M140 S"+QString::number(temp));
}
