QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS +=  ../25june/nod.h
SOURCES +=  tst_test.cpp ../25june/nod.cpp
