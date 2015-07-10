TEMPLATE = lib
TARGET = emf4cpp-ecorecpp

CONFIG += \
    shared

CONFIG -= \
    app_bundle \
    qt

DEFINES += \
    DEBUG

include(../emf4cpp.pri)

INCLUDEPATH += \
    $$PWD/..

LIBS += \
    -L$$DESTDIR \
    -lemf4cpp-ecore

HEADERS += \
    json/json_serializer.hpp \
    json/serializer.hpp \
    mapping/any.hpp \
    mapping/any_traits.hpp \
    mapping/EList.hpp \
    mapping/EListImpl.hpp \
    mapping/list.hpp \
    mapping/out_ptr.hpp \
    mapping/set_traits.hpp \
    mapping/string_traits.hpp \
    mapping/type_traits.hpp \
    notify/Adapter.hpp \
    notify/Notification.hpp \
    notify/Notifier.hpp \
    parser/handler-xerces.hpp \
    parser/handler.hpp \
    parser/localstr.hpp \
    parser/parser-xerces.hpp \
    parser/parser.hpp \
    parser/parser_common.hpp \
    parser/reference_parser.hpp \
    parser/simple_xml_parser.hpp \
    parser/unresolved_reference.hpp \
    serializer/externalstr.hpp \
    serializer/greedy_serializer.hpp \
    serializer/serializer-xerces.hpp \
    serializer/serializer.hpp \
    util/debug.hpp \
    util/print.hpp \
    mapping.hpp \
    mapping_forward.hpp \
    MetaModelRepository.hpp \
    notify.hpp \
    notify_forward.hpp \
    ../ecorecpp.hpp

SOURCES += \
    notify/Adapter.cpp \
    notify/Notification.cpp \
    notify/Notifier.cpp \
    parser/handler.cpp \
    parser/parser.cpp \
    serializer/serializer.cpp \
    util/print.cpp \
    MetaModelRepository.cpp
