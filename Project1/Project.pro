#-------------------------------------------------
#
# Project created by QtCreator 2018-04-13T15:07:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    block.cpp \
    optionlist.cpp \
    myscene.cpp

HEADERS  += mainwindow.h \
    block.h \
    optionlist.h \
    myscene.h

FORMS    += mainwindow.ui

RESOURCES += \
    myresources.qrc
