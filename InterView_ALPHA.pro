#-------------------------------------------------
#
# Project created by QtCreator 2012-11-26T22:54:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InterView_ALPHA
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    centerview.cpp

HEADERS  += mainwindow.h \
    centerview.h

FORMS    += mainwindow.ui \
    centerview.ui \
    issue_editor.ui \
    stu_editor.ui \
    inter_maneger.ui \
    inter_editor.ui

OTHER_FILES += \
    data_struction.txt
