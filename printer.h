#ifndef PRINTER_H
#define PRINTER_H

#include <QObject>
#include <QTime>
#include <QDebug>
#include <QStringList>
#include <QPoint>
#include <QTextCodec>
#include <QThread>
#include <QTimer>
#include <QVector3D>
#include "qextserialport.h"
#include "qextserialenumerator.h"


//thread class for serial port communication, currently not used
class Printer : public QObject
{
    Q_OBJECT
private:
     QextSerialPort *portObj;
     QStringList gCodeBuffer;
     bool isPrinting;
     bool monitorTemperature;
     QTimer *temperatureTimer;
     QTimer *readTimer;
     QVector3D curr_pos;
     QString inBuffer;
     QStringList responseBuffer;
     bool writeNext;
     double last_bed_temp;
     double last_head_temp;
     bool connectionActive;
public:
    explicit Printer(QObject *parent = 0);
    bool isConnected();
    bool getIsPrinting();
signals:
    void write_to_console(QString);
    void currentTemp(double,double,double);
    void progress(int);
    void currentPosition(QVector3D);
    void connected(bool);
    void newResponce(QString);
    void settingTemp1(double);
    void settingTemp3(double);
private slots:
    void processResponce(QString);
public slots:
    //read
    void readFromPort();
    //write
    int writeToPort(QString command);
    //connecting to port
    bool connectPort(QString port, int baud);
    bool disconnectPort();
    //slots for printer control
    //moving axis
    void homeX();
    void homeY();
    void homeZ();
    void homeAll();
    //move head x/y
    void moveHead(QPoint point, int speed);
    //move head Z
    void moveHeadZ(double z, int speed);
    //setting fan speed
    void setFan(int percent);
    //disable stepper
    void disableSteppers();
    void loadToBuffer(QStringList buffer, bool clear);
    void startPrint();
    void stopPrint();
    void setMonitorTemperature(bool);
    void getTemperature();
    void setTemp1(int);
    void setTemp3(int);
};

#endif // PRINTER_H
