#include "printer.h"

Printer::Printer(QObject *parent) :
    QObject(parent)
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName ("UTF-8"));
    PortSettings settings = {BAUD9600, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
    this->portObj = new QextSerialPort("",settings);
    this->isPrinting=false;
    this->connectionActive=false;
    this->temperatureTimer = new QTimer(this);
    this->temperatureTimer->setInterval(2000);
    connect(temperatureTimer, SIGNAL(timeout()), this, SLOT(getTemperature()));

    this->readTimer = new QTimer(this);
    this->readTimer->setInterval(5);
    connect(this->readTimer, SIGNAL(timeout()), this, SLOT(readFromPort()));

    connect(this, SIGNAL(newResponce(QString)), this, SLOT(processResponce(QString)));
    curr_pos.setX(0);
    curr_pos.setY(0);
    curr_pos.setZ(0);
    last_bed_temp = 0;
    last_head_temp = 0;
    inBuffer.clear();
    responseBuffer.clear();
    writeNext=true;
}

bool Printer::isConnected(){
    if(this->portObj!=NULL){
        return this->portObj->isReadable();
    }
    else
        return false;
}

bool Printer::getIsPrinting(){
    return this->isPrinting;
}


bool Printer::connectPort(QString port, int baud){
    emit write_to_console(tr("Connecting..."));
    if(port!=""){
        PortSettings settings = {(BaudRateType)baud, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
        delete this->portObj;
        this->portObj = new QextSerialPort(port,settings,QextSerialPort::Polling);
        if(this->portObj->open(QIODevice::ReadWrite | QIODevice::Unbuffered)){
            emit write_to_console(tr("Printer connected"));
            writeToPort("M115");
            this->readTimer->start();
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
    this->readTimer->stop();
    emit write_to_console(tr("Printer disconnected"));
    emit connected(false);
    this->connectionActive=false;
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

    if(command.contains("G1") || command.contains("G0"))
        emit currentPosition(curr_pos);

    if(this->isConnected()){

        emit write_to_console(QString("Sending: "+command.toAscii()+"\n").replace("\n","\\n").replace("\r","\\r"));
        emit write_to_console("Written: "+QString::number(portObj->write(command.toAscii()+"\n",command.toAscii().length()+1))+" bytes");
        writeNext=false;
    }
    else{
        write_to_console(tr("Printer offline"));
        return -1;
    }
    return 0;
}

//reading from port, we want to be here as short as posible
void Printer::readFromPort(){
    if(portObj->bytesAvailable()>0){
        emit newResponce(portObj->readLine());
    }
}

//proper parsing of responce
void Printer::processResponce(QString responce){
    if(!this->connectionActive){
        this->connectionActive=true;
        emit connected(true);
    }
    //add data to buffer
    inBuffer.append(responce);

    //send full responces to fifo
    if(inBuffer.contains("\n")){
        responseBuffer.append(inBuffer.left(inBuffer.lastIndexOf("\n")+1).split("\n",QString::SkipEmptyParts));
    }
    //clear buffer
    inBuffer.remove(0,inBuffer.lastIndexOf("\n")+1);

    //proccess all responces from fifo
    while(responseBuffer.size()>0){
        QString lastResponse=responseBuffer.takeFirst();
        emit write_to_console("Got responce: "+ lastResponse);
        //if its temp status
        if(lastResponse.contains("T:") || lastResponse.contains("B:")){
            bool ok;

            double bed_temp = lastResponse.mid(lastResponse.indexOf("B:")+2,lastResponse.indexOf(" ",lastResponse.indexOf("B:"))-lastResponse.indexOf("B:")-2).toDouble(&ok);
            if(ok){
                last_bed_temp=bed_temp;
            }
            double head_temp = lastResponse.mid(lastResponse.indexOf("T:")+2,lastResponse.indexOf(" ",lastResponse.indexOf("T:"))-lastResponse.indexOf("T:")-2).toDouble(&ok);
            if(ok){
                last_head_temp=head_temp;
            }
            emit currentTemp(last_head_temp,0.0,last_bed_temp);
        }
        //if its response for position command
        //if we are printing then continue
        if(lastResponse.contains("ok")){
            if(this->gCodeBuffer.size()>0 && this->isPrinting){
                writeToPort(this->gCodeBuffer.takeFirst());
                emit progress(this->gCodeBuffer.size());
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
    writeToPort("G1 X"+QString::number(point.x())+" Y"+QString::number(point.y()));
}
void Printer::moveHeadZ(double z, int speed){
    writeToPort("G1 F"+QString::number(speed));
    writeToPort("G1 Z"+QString::number(z));
}

//setting fan speed
void Printer::setFan(int percent){
    float value=255*((float)percent/(float)100);
    if(this->isConnected()){
        if(this->isPrinting){
            this->gCodeBuffer.prepend("M106 S"+QString::number((int)value));
        }
        else{
            writeToPort("M106 S"+QString::number((int)value));
        }
    }
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
        this->temperatureTimer->start();
    }
    else{
        this->temperatureTimer->stop();
    }
}

void Printer::getTemperature(){
    if(this->isConnected()){
        if(this->isPrinting){
            this->gCodeBuffer.prepend("M105");
        }
        else{
            writeToPort("M105");
        }
    }
}

void Printer::setTemp1(int temp){
    if(this->isConnected()){
        if(this->isPrinting){
            this->gCodeBuffer.prepend("M104 S"+QString::number(temp));
        }
        else{
            writeToPort("M104 S"+QString::number(temp));
        }
    }
}

void Printer::setTemp3(int temp){
    if(this->isConnected()){
        if(this->isPrinting){
            this->gCodeBuffer.prepend("M140 S"+QString::number(temp));
        }
        else{
            writeToPort("M140 S"+QString::number(temp));
        }
    }
}

void Printer::extrude(int lenght, int speed){
    writeToPort("G91");
    writeToPort("G1 E"+QString::number(lenght)+" F"+QString::number(speed*60));
    writeToPort("G90");
}

void Printer::retrackt(int lenght, int speed){
    writeToPort("G91");
    writeToPort("G1 E"+QString::number(lenght*-1)+" F"+QString::number(speed*60));
    writeToPort("G90");
}
