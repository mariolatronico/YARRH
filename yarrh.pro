#-------------------------------------------------
#
# Project created by QtCreator 2012-06-26T12:00:18
#
#-------------------------------------------------

QT += core gui opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = yarrh
TEMPLATE = app

INCLUDEPATH += "./"

SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    gcodeobject.cpp \
    layer.cpp \
    graphwidget.cpp \
    headcontrol.cpp \
    headcontrolline.cpp \
    printer.cpp \
    aboutwindow.cpp \
    layer2d.cpp \
    calibratedialog.cpp \
    optiondialog.cpp \
    slicedialog.cpp \
    stlview.cpp \
    stlobject.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    gcodeobject.h \
    layer.h \
    graphwidget.h \
    headcontrol.h \
    headcontrolline.h \
    printer.h \
    aboutwindow.h \
    layer2d.h \
    calibratedialog.h \
    optiondialog.h \
    slicedialog.h \
    stlview.h \
    stlobject.h

FORMS    += mainwindow.ui \
    aboutwindow.ui \
    calibratedialog.ui \
    optiondialog.ui \
    slicedialog.ui

RESOURCES += \
    resource.qrc

TRANSLATIONS = yarrh_pl.ts \
               yarrh_en.ts \
               yarrh_de.ts \
               yarrh_bg.ts \
               yarrh_fi.ts
RC_FILE = icon.rc

include(qextserialport/qextserialport.pri)















