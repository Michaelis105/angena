#-------------------------------------------------
#
# Project created by QtCreator 2016-10-15T18:40:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Angena
TEMPLATE = app


SOURCES += main.cpp\
        angena.cpp \
    model.cpp \
    familytree.cpp \
    person.cpp \
    dialog.cpp \
    writer.cpp \
    person_node.cpp \
    reader.cpp

HEADERS  += angena.h \
    model.h \
    familytree.h \
    person.h \
    dialog.h \
    writer.h \
    person_node.h \
    reader.h

FORMS    += angena.ui \
    aboutdialog.ui \
    dialog.ui \
    newfamilytree.ui
