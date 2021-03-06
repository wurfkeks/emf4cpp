import ecore

# Creando un metamodelo
companyPkg = ecore.createEPackage()
companyPkg.set_name("company")
companyPkg.set_nsPrefix("company")
companyPkg.set_nsURI("http://com.example.company")

# Creando clases
company = ecore.createEClass()
company.set_name("Company")

department = ecore.createEClass()
department.set_name("Department")

employee = ecore.createEClass()
employee.set_name("Employee")

# Creando referencias
companyDepartments = ecore.createEReference()
companyDepartments.set_name("departments")
companyDepartments.set_eType(department)

departmentEmployees = ecore.createEReference()
departmentEmployees.set_name("employees")
departmentEmployees.set_eType(employee)

departmentManager = ecore.createEReference()
departmentManager.set_name("manager")
departmentManager.set_eType(employee)

# Soportado, seria mas logico desde lista [c, d, e]
companyPkg.set_eClassifiers(company, department, employee)

# Comprobando...
print company.get_name()
print department.get_name()
print employee.get_name()

print companyPkg.get_eClassifiers()
for i in companyPkg.get_eClassifiers():
    print i.get_name()


def print_pkg(pkg):
    print pkg.get_name()
    print pkg.get_nsURI()
    print pkg.get_nsPrefix()
    # print ecorePkg.get_eClassifiers()
    for i in pkg.get_eClassifiers():
        print "- EClassifier %s" % (i.get_name())
        if ecore.EClass.instanceOf(i):
            print "-- EClass %s" % (i.get_name())
            for j in i.get_eStructuralFeatures():
                print "--- EStructuralFeature %s" % (j.get_name())
        print

print
# print_pkg(ecore.package)
print_pkg(companyPkg)

