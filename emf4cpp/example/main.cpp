#include <ecore.hpp> // Ecore metamodel
#include <ecorecpp.hpp> // EMF4CPP utils
#include <iostream>
#include <fstream>

using namespace ecore;

int main(void)
{
    EcoreFactory_ptr ecoreFactory = EcoreFactory::_instance();
    EcorePackage_ptr ecorePackage = EcorePackage::_instance();

    // Create a Company class
    EClass_ptr companyClass = ecoreFactory->createEClass();
    companyClass->setName("Company");

    // Add name attribute to a Company class
    EAttribute_ptr companyName = ecoreFactory->createEAttribute();
    companyName->setName("name");
    companyName->setEType(ecorePackage->getEString());
    companyClass->getEStructuralFeatures().push_back(companyName);

    // Create an Employee class
    EClass_ptr employeeClass = ecoreFactory->createEClass();
    employeeClass->setName("Employee");

    // Add a name attribute to an Employee class
    EAttribute_ptr employeeName = ecoreFactory->createEAttribute();
    employeeName->setName("name");
    employeeName->setEType(ecorePackage->getEString());
    employeeClass->getEStructuralFeatures().push_back(employeeName);

    // Create a Departament class
    EClass_ptr departmentClass = ecoreFactory->createEClass();
    departmentClass->setName("Department");

    // Add department identification number
    EAttribute_ptr departmentNumber = ecoreFactory->createEAttribute();
    departmentNumber->setName("number");
    departmentNumber->setEType(ecorePackage->getEInt());
    departmentClass->getEStructuralFeatures().push_back(departmentNumber);

    // Department class can contain reference to one or many employees
    EReference_ptr departmentEmployees = ecoreFactory->createEReference();
    departmentEmployees->setName("employees");
    departmentEmployees->setEType(employeeClass);

    // Specify that it could be zero or more employees
    departmentEmployees->setUpperBound(-1);
    departmentEmployees->setContainment(true);
    departmentClass->getEStructuralFeatures().push_back(departmentEmployees);

    // One of the department employees must be the manager
    EReference_ptr departmentManager = ecoreFactory->createEReference();
    departmentManager->setName("manager");
    departmentManager->setEType(employeeClass);
    departmentManager->setLowerBound(1);
    departmentClass->getEStructuralFeatures().push_back(departmentManager);

    // Company can contain reference to zero or more departments
    EReference_ptr companyDepartments = ecoreFactory->createEReference();
    companyDepartments->setName("departments");
    companyDepartments->setEType(departmentClass);
    companyDepartments->setUpperBound(-1);
    companyDepartments->setContainment(true);
    companyClass->getEStructuralFeatures().push_back(companyDepartments);

    // Create a package that represents company
    EPackage_ptr companyPackage = ecoreFactory->createEPackage();
    companyPackage->setName("company");
    companyPackage->setNsPrefix("company");
    companyPackage->setNsURI("http:///com.example.company.ecore");
    companyPackage->getEClassifiers().push_back(employeeClass);
    companyPackage->getEClassifiers().push_back(departmentClass);
    companyPackage->getEClassifiers().push_back(companyClass);

    // Initialize the metamodel
    companyPackage->_initialize();

    // Serializing the metamodel
    std::ofstream ecoreFile;
    ecoreFile.open("company.ecore");
    ::ecorecpp::serializer::serializer _ser(ecoreFile); // filename
    _ser.serialize(companyPackage);
    ecoreFile.close();

    // Delete the metamodel
    delete companyPackage;

    //
    // Deserializing the serialized metamodel
    //

    // Insert the ecore metamodel in the metamodel repository
    // Required for parsing models conforms to that metamodel
    ecorecpp::MetaModelRepository::_instance()->load(ecorePackage);

    // Deserializing the serialized metamodel
    ::ecorecpp::parser::parser _par;
    EPackage_ptr pkg = _par.load("company.ecore")->as< EPackage >(); // filename

    // Printing the metamodel
    std::cout << "EPackage: " << pkg->getName() << std::endl;

    const ::ecorecpp::mapping::EList< ::ecore::EClassifier >& classifiers = pkg->getEClassifiers();
    for (size_t i = 0; i < classifiers.size(); i++)
    {
        std::cout << "  EClassifier: " << classifiers[i]->getName()
                  << " (" << classifiers[i]->eClass()->getName()
                  << ")" << std::endl;
    }

    // Delete the parsed metamodel
    delete pkg;

    return 0;
}

