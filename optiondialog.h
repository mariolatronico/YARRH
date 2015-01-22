#ifndef OPTIONDIALOG_H
#define OPTIONDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QVector3D>
#include <QFileDialog>

namespace Ui {
    class OptionDialog;
}

class OptionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OptionDialog(QWidget *parent = 0);
    ~OptionDialog();
    QString getSlicerDir();
    QString getConfigDir();
    QString getOutputDir();
    QVector3D getSize();
public slots:
    void setSlicerDir(QString dir);
    void setConfigDir(QString dir);
    void setOutputDir(QString dir);
    void setSize(QVector3D size);
private slots:
    void on_closeBtn_clicked();
    void on_slicerDirBtn_clicked();
    void on_configDirBtn_clicked();
    void on_outputDirBtn_clicked();

signals:
    void slicerPathChanged(QString);
    void outputPathChanged(QString);
    void newSize(QVector3D);
private:
    Ui::OptionDialog *ui;
};

#endif // OPTIONDIALOG_H
