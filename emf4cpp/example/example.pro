TEMPLATE = app
TARGET = emf4cpp-example

CONFIG += \
    console

CONFIG -= \
    app_bundle \
    qt

INCLUDEPATH += \
    $$PWD/..

LIBS += \
    -L$$PWD/../../build-emf4cpp-Desktop_Qt_5_5_0_MinGW_32bit-Release/ecore/release \
    -lemf4cpp-ecore \
    -L$$PWD/../../build-emf4cpp-Desktop_Qt_5_5_0_MinGW_32bit-Release/ecorecpp/release \
    -lemf4cpp-ecorecpp \

SOURCES += main.cpp
