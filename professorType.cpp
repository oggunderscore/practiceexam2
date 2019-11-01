#include "header.h"
#include "professorType.h"
#include "personType.h"

int professorType::professorCount = 0;

//Constructors

professorType::professorType() { // empty?
}
professorType::professorType(string fName1, string lName1) :personType(fName1, lName1) { // empty?
}
professorType::professorType(string employeeID1, string department1, string degree1, string fName1, string lName1, string address1, double height1, string DOB1, char gender1)
	:personType(fName1, lName1, address1, height1, DOB1, gender1) {
	employeeID = employeeID1;
	department = department1;
	degree = degree1;
}


//Setters
void professorType::setEmployeeID(string employeeID1) {
	employeeID = employeeID1;
}
void professorType::setDepartment(string department1) {
	department = department1;
}
void professorType::setDegree(string degree1) {
	degree = degree1;
}


//Getters
string professorType::getEmployeeID() {
	return employeeID;
}
string professorType::getDepartment() {
	return department;
}
string professorType::getDegree() {
	return degree;
}


//Functs
void professorType::print() {
	cout << fixed;
	cout.precision(2);
	personType::print();
	cout << " > " << "Employee ID: " << employeeID << endl;
	cout << " > " << "Department: " << department << endl;
	cout << " > " << "Degree: " << degree << endl;
	cout << endl;
	
}


bool professorType::equals(professorType comparator) {
	if (getEmployeeID() == comparator.getEmployeeID() && getDepartment() == comparator.getDepartment() && getDegree() == comparator.getDegree()) {
		return true;
	} else {
		return false;
	}
}