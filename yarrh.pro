#-------------------------------------------------
#
# Project created by QtCreator 2012-06-26T12:00:18
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = yarrh
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    portthread.cpp \
    glwidget.cpp \
    gcodeobject.cpp \
    layer.cpp \
    graphwidget.cpp \
    headcontrol.cpp \
    headcontrolline.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    gcodeobject.h \
    portthread.h \
    layer.h \
    graphwidget.h \
    headcontrol.h \
    headcontrolline.h

FORMS    += mainwindow.ui

include(qextserialport/qextserialport.pri)






