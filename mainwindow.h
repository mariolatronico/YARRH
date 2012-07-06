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
#include "printer.h"

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
    //port enumarator
    QextSerialEnumerator *portEnum;
    QString fileContent;
    QStringList gcodeLines;
    GlWidget *glWidget;
    GraphWidget *graphWidget;
    headControl *controlWidget;
    QTime startTime;
    QTime durationTime;
    QTime eta;
    //Printer obj
    Printer *printerObj;
private slots:
    void deviceConnected(const QextPortInfo &);
    void deviceDisconnected(const QextPortInfo &);
    void connectClicked();
    void loadFile();
    void startPrint();
    //set layers
    void setLayers(int layers);
    void moveHead(QPoint point);
    //pausing print
    void pausePrint(bool);
    void drawTemp(double, double,double);
    void updateProgress(int);
};

#endif // MAINWINDOW_H
