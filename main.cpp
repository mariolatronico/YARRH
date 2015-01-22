#include <qglobal.h>
#if QT_VERSION >= 0x050000
#include <QApplication>
#else
#include <QtGui/QApplication>
#endif
#include <QDebug>
#include <QTextCodec>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //setting string codecs
#if QT_VERSION <= 0x050000
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName ("UTF-8"));
#endif
    QApplication a(argc, argv);
    QString locale = QLocale::system().name();

    QCoreApplication::setOrganizationName("wuflnor");
    // XXX This domain is only for Mac settings.
    QCoreApplication::setOrganizationDomain("wuflnor.github.org");
    QCoreApplication::setApplicationName("YARRH");

    QTranslator translator;
    qDebug() << translator.load(QString(":/yarrh_")+locale);
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
