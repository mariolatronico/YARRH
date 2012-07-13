#include <QtGui/QApplication>
#include <QDebug>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString locale = QLocale::system().name();

    QTranslator translator;
    qDebug() << translator.load(QString(":/yarrh_")+locale);
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
