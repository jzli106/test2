#-------------------------------------------------
#
# Project created by QtCreator 2016-04-06T13:11:00
#
#-------------------------------------------------

QT       += core gui
CONFIG +=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    node.cpp

HEADERS  += mainwindow.h \
    useful.h \
    about.h \
    node.h

FORMS    += mainwindow.ui \
    about.ui

RESOURCES += \
    text.qrc
