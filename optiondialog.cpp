#include "optiondialog.h"
#include "ui_optiondialog.h"

OptionDialog::OptionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionDialog)
{
    ui->setupUi(this);
}

OptionDialog::~OptionDialog()
{
    delete ui;
}

void OptionDialog::on_closeBtn_clicked()
{
    emit newSize(QVector3D(ui->sizeX->value(),ui->sizeY->value(),ui->sizeZ->value()));
    this->hide();
}

void OptionDialog::setSlicerDir(QString dir){
    ui->slicerDir->setText(dir);
}

QString OptionDialog::getSlicerDir(){
    return ui->slicerDir->text();
}

void OptionDialog::setConfigDir(QString dir){
    ui->configDir->setText(dir);
}

QString OptionDialog::getConfigDir(){
    return ui->configDir->text();
}

void OptionDialog::setOutputDir(QString dir){
    ui->outputDir->setText(dir);
}

QString OptionDialog::getOutputDir(){
    return ui->outputDir->text();
}

QVector3D OptionDialog::getSize(){
    return QVector3D(ui->sizeX->value(),ui->sizeY->value(),ui->sizeZ->value());
}

void OptionDialog::setSize(QVector3D size){
    ui->sizeX->setValue(size.x());
    ui->sizeY->setValue(size.y());
    ui->sizeZ->setValue(size.z());
}

void OptionDialog::on_slicerDirBtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Find slicer exe"), ui->slicerDir->text(), tr("Slic3r-console (slic3r-console.exe)"));
    ui->slicerDir->setText(fileName);
    emit slicerPathChanged(fileName);
}

void OptionDialog::on_configDirBtn_clicked()
{

    QString dirName = QFileDialog::getExistingDirectory(this,"Choose configs dir", ui->slicerDir->text());
    ui->configDir->setText(dirName);
}

void OptionDialog::on_outputDirBtn_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this,"Choose output dir", ui->slicerDir->text());
    ui->outputDir->setText(dirName);
    emit outputPathChanged(dirName);
}
