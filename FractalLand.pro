#-------------------------------------------------
#
# Project created by QtCreator 2012-09-08T13:52:59
#
#-------------------------------------------------
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT       += core gui

TARGET = FractalLand
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    setings.cpp \
    fbmland.cpp

HEADERS  += mainwindow.h \
    setings.h \
    fbmland.h

FORMS    += mainwindow.ui \
    setings.ui
