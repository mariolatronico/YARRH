#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString locale = QLocale::system().name();

    QTranslator translator;
    translator.load(QString("translations/yarrh_") + locale);
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    if (!((QGLFormat::openGLVersionFlags() & QGLFormat::OpenGL_Version_2_0) ||
               (QGLFormat::openGLVersionFlags() & QGLFormat::OpenGL_ES_Version_2_0))) {
             QMessageBox::information(0, "ERROR","This system does not support OpenGL 2.0 or OpenGL ES 2.0");
             return 0;
         }
    return a.exec();
}
