#include "aboutwindow.h"
#include "ui_aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(hide()));
    connect(ui->donateBtn, SIGNAL(clicked()), this, SLOT(openUrl()));
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

void AboutWindow::openUrl(){
    QDesktopServices::openUrl(QUrl("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=D28SAZ7TPYULG"));
}

void AboutWindow::showOnXY(QPoint point){
    this->move(point);
    this->show();
}

void AboutWindow::on_label_6_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}

void AboutWindow::on_label_3_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}
