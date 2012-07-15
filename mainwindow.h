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
#include "aboutwindow.h"
#include "calibratedialog.h"

//version number
#define VERSION_MAJOR       0
#define VERSION_MINOR       1
#define VERSION_REVISION    4

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *e);
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
    QString lastOpendDir;
    //Printer obj
    Printer *printerObj;
    //about window
    AboutWindow *aboutWindow;
    //calibrate dialog
    CalibrateDialog *calibrateDialog;
    //confirmation dialog
    QMessageBox* msgBox;
    qreal lastZ;
    int currentLayer;
    void saveSettings();
    void restoreSettings();
private slots:
    void deviceConnected(const QextPortInfo &);
    void deviceDisconnected(const QextPortInfo &);
    void connectClicked(bool);
    void loadFile();
    void startPrint();
    //set layers
    void setLayers(int layers);
    void moveHead(QPoint point);
    //pausing print
    void pausePrint(bool);
    void drawTemp(double, double,double);
    void updateProgress(int);
    //setting temperatures
    void setTemp1(bool);
    void setTemp2(bool);
    void setTemp3(bool);

    void moveZ(int);
    void updateZ(int);
    void on_actionO_Programie_triggered();
    void updateHeadGoToXY(QPoint);
    void updateHeadPosition(QVector3D);
    void on_outLine_returnPressed();
    void on_groupBox_2_toggled(bool arg1);
    void on_fanBtn_toggled(bool checked);
    void on_extrudeBtn_clicked();
    void on_retracktBtn_clicked();
    void printerConnected(bool);
    //setting temp in ui from gcode
    void setTemp1FromGcode(double value);
    void setTemp3FromGcode(double value);
    void on_actionCalibrate_printer_triggered();
};

#endif // MAINWINDOW_H
