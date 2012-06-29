#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTextCodec>
#include <QFileDialog>
#include <QTime>
#include "qextserialport.h"
#include "qextserialenumerator.h"
#include "glwidget.h"
#include "gcodeobject.h"
#include "graphwidget.h"
#include "headcontrol.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //enumarator portow
    QextSerialEnumerator *portEnum;
    QextSerialPort *portObj;
    QString fileContent;
    QStringList gcodeLines;
    GlWidget *glWidget;
    GraphWidget *graphWidget;
    headControl *controlWidget;
    QTime startTime;
    QTime durationTime;
    QTime eta;
private slots:
    void deviceConnected(const QextPortInfo &);
    void deviceDisconnected(const QextPortInfo &);
    void connectClicked();
    void writeToPort();
    void sendLine(QString line);
    void readFromPort();
    void loadFile();
    void printObject(bool status);
    //moving axis
    void homeX();
    void homeY();
    void homeZ();
    void homeAll();
    //set layers
    void setLayers(int layers);
    //void move head x/y
    void moveHead(QPoint point);
    void setFan(int percent);
};

#endif // MAINWINDOW_H
