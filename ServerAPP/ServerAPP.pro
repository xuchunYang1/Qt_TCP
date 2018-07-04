#-------------------------------------------------
#
# Project created by QtCreator 2018-07-04T11:18:04
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ServerAPP
TEMPLATE = app


SOURCES += main.cpp\
        serverui.cpp \
    connectclient.cpp

HEADERS  += serverui.h \
    connectclient.h

FORMS    += serverui.ui \
    connectclient.ui
