TEMPLATE = app
TARGET = emf4cpp-example

CONFIG += \
    console

CONFIG -= \
    app_bundle \
    qt

include(../emf4cpp.pri)

INCLUDEPATH += \
    $$PWD/..

LIBS += \
    -L$$DESTDIR \
    -lemf4cpp-ecore \
    -lemf4cpp-ecorecpp \

SOURCES += main.cpp
