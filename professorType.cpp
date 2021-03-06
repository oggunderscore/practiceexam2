#include "header.h"
#include "professorType.h"
#include "personType.h"
#include "courseType.h"

int professorType::professorCount = 0;

//Constructors

professorType::professorType() { // empty?
}
professorType::professorType(string fName1, string lName1) :personType(fName1, lName1) { // empty?
}
professorType::professorType(string employeeID1, string department1, string degree1, string fName1, string lName1, string address1, double height1, string DOB1, char gender1)
	:personType(fName1, lName1, address1, height1, DOB1, gender1) {
	numCourses = 0;
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
	cout << left << "   " << setw(8) << employeeID << " " << setw(15) << department << " " << setw(20) << degree << endl;
	//Print courses
	cout << "\n                                                                                                 Section ID Course Name     Title                      Days  Time                Cap Enrolled\n                                                                                                 ------------------------------------------------" << endl;
	if (numCourses != 0) {
		for (int x = 0; x < numCourses; x++) {
			string status;
			if (courses[x]->getOpen() == true)
				status = true;
			else 
				status = false;
			cout << "                                                                                                 " << left << setw(10) << courses[x]->getSectionID() << " " << setw(11) << courses[x]->getCourse() << " " << setw(30) << courses[x]->getTitle() << " " << setw(4) << courses[x]->getDays() << " " << setw(20) << courses[x]->getTime() << " " << setw(3) << courses[x]->getCap() << " " << setw(8) << courses[x]->getEnrolled() << " " << setw(6) << status << endl;
			//cout << "                                                                                                 " << setw(10) << courses[x]->getSectionID() << " " << setw(15) << courses[x]->getCourse() << " " << setw(20) << courses[x]->getTitle() << endl;
			for (int y = 0; y < courses[x]->getEnrolled(); y++) {
				courses[x]->printStudent(y);
			}
		}
	}
}


bool professorType::equals(professorType comparator) {
	if (getEmployeeID() == comparator.getEmployeeID() && getDepartment() == comparator.getDepartment() && getDegree() == comparator.getDegree()) {
		return true;
	} else {
		return false;
	}
}

int professorType::getNumCourses() {
	return numCourses;
}

void professorType::addCourse(courseType *course1) {
	courses[numCourses] = course1;
	numCourses++;
}