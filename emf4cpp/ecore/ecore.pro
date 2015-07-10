TEMPLATE = lib
TARGET = emf4cpp-ecore

CONFIG += \
    console \
    shared \
    C++11

CONFIG -= \
    app_bundle \
    qt

include(../emf4cpp.pri)

INCLUDEPATH += \
    $$PWD/..

HEADERS += \
    EAnnotation.hpp \
    EAttribute.hpp \
    EClass.hpp \
    EClassifier.hpp \
    EcoreFactory.hpp \
    EcorePackage.hpp \
    EDataType.hpp \
    EEnum.hpp \
    EEnumLiteral.hpp \
    EFactory.hpp \
    EGenericType.hpp \
    EModelElement.hpp \
    ENamedElement.hpp \
    EObject.hpp \
    EOperation.hpp \
    EPackage.hpp \
    EParameter.hpp \
    EReference.hpp \
    EStringToStringMapEntry.hpp \
    EStructuralFeature.hpp \
    ETypedElement.hpp \
    ETypeParameter.hpp \
    ../ecore.hpp \
    ../ecore_forward.hpp

SOURCES += \
    EAnnotation.cpp \
    EAnnotationImpl.cpp \
    EAttribute.cpp \
    EAttributeImpl.cpp \
    EClass.cpp \
    EClassifier.cpp \
    EClassifierImpl.cpp \
    EClassImpl.cpp \
    EcoreFactory.cpp \
    EcoreFactoryImpl.cpp \
    EcorePackage.cpp \
    EcorePackageImpl.cpp \
    EDataType.cpp \
    EDataTypeImpl.cpp \
    EEnum.cpp \
    EEnumImpl.cpp \
    EEnumLiteral.cpp \
    EEnumLiteralImpl.cpp \
    EFactory.cpp \
    EFactoryImpl.cpp \
    EGenericType.cpp \
    EGenericTypeImpl.cpp \
    EModelElement.cpp \
    EModelElementImpl.cpp \
    ENamedElement.cpp \
    ENamedElementImpl.cpp \
    EObject.cpp \
    EObjectImpl.cpp \
    EOperation.cpp \
    EOperationImpl.cpp \
    EPackage.cpp \
    EPackageImpl.cpp \
    EParameter.cpp \
    EParameterImpl.cpp \
    EReference.cpp \
    EReferenceImpl.cpp \
    EStringToStringMapEntry.cpp \
    EStringToStringMapEntryImpl.cpp \
    EStructuralFeature.cpp \
    EStructuralFeatureImpl.cpp \
    ETypedElement.cpp \
    ETypedElementImpl.cpp \
    ETypeParameter.cpp \
    ETypeParameterImpl.cpp \
    ../ecore.cpp \
    ../ecorecpp/notify/Notification.cpp
