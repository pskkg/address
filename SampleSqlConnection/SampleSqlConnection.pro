QT += core
QT -= gui
QT += sql widgets
QT += sql

#CONFIG += c++11

TARGET = SampleSqlConnection
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mysqlconnect.cpp

HEADERS += \
    mysqlconnect.h

