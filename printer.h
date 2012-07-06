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
#include "qextserialport.h"
#include "qextserialenumerator.h"


//thread class for serial port communication, currently not used
class Printer : public QObject
{
    Q_OBJECT
private:
     QextSerialPort *portObj;
     QStringList gCodeBuffer;
     int writeToPort(QString command);
     bool isPrinting;
     bool monitorTemperature;
     QTimer *temperatureTimer;
public:
    explicit Printer(QObject *parent = 0);
    bool isConnected();
signals:
    void write_to_console(QString);
    void currentTemp(double,double,double);
    void progress(int);
public slots:
    void readFromPort();
    //connecting to port
    bool connectPort(QString port, int baud);
    //slots for printer control
    //moving axis
    void homeX();
    void homeY();
    void homeZ();
    void homeAll();
    //void move head x/y
    void moveHead(QPoint point, int speed);
    //setting fan speed
    void setFan(int percent);
    //disable stepper
    void disableSteppers();
    void loadToBuffer(QStringList buffer);
    void startPrint();
    void stopPrint();
    void setMonitorTemperature(bool);
    void getTemperature();
};

#endif // PRINTER_H
