#ifndef CALIBRATEDIALOG_H
#define CALIBRATEDIALOG_H

#include <QDialog>
#include <QInputDialog>
#include <QDebug>
#include <QMessageBox>
#include <QVector4D>

namespace Ui {
    class CalibrateDialog;
}

class CalibrateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CalibrateDialog(QWidget *parent = 0);
    ~CalibrateDialog();

    bool autoCalibrateX();
    bool autoCalibrateY();
    bool autoCalibrateZ();
    bool autoCalibrateE();
    void setAutoCalibrateX(bool);
    void setAutoCalibrateY(bool);
    void setAutoCalibrateZ(bool);
    void setAutoCalibrateE(bool);
    void setXStepsPerMm(double);
    void setYStepsPerMm(double);
    void setZStepsPerMm(double);
    void setEStepsPerMm(double);
    QVector4D getCallibrationsSetting();
signals:
    void writeToPrinter(QString);
private slots:
    void on_calibrateXBtn_clicked();
    void on_calibrateYBtn_clicked();
    void on_calibrateZBtn_clicked();

private:
    Ui::CalibrateDialog *ui;
};

#endif // CALIBRATEDIALOG_H
