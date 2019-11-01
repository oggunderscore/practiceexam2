#include "header.h"
#include "personType.h"
#include "studentType.h"
#include "courseType.h"

int studentType::studentCount = 0;

studentType::studentType()
		:personType() {
	gpa = 0.0;
	classification = "empty";
	id = "empty";
}
studentType::studentType(string fName1, string lName1)
		:personType(fName1, lName1) {
	gpa = 0.0;
	classification = "empty";
	id = "empty";
}
studentType::studentType(string fName1, string lName1, double gpa1, string classification1, string id1)
		:personType(fName1, lName1) {
	gpa = gpa1;
	classification = classification1;
	id = id1;
}
studentType::studentType(string fName1, string lName1, string a, double h, string d, char g, double gpa1, string classification1, string id1)
		:personType(fName1, lName1, a, h, d, g) {
	gpa = gpa1;
	classification = classification1;
	id = id1;
}

void studentType::setGPA(double x) {
	gpa = x;
}
void studentType::setID(string x) {
	id = x;
}
void studentType::setClassification(string x) {
	classification = x;
}
double studentType::getGPA() {
	return gpa;
}
string studentType::getID() {
	return id;
}
string studentType::getClassification() {
	return classification;
}

void studentType::print() {
	personType::print();
	cout << " > GPA: " << getGPA() << endl;
	cout << " > Classification: " << getClassification() << endl;
	cout << " > ID: " << getID() << endl;
	cout << endl;
	
}
bool studentType::equals(studentType comparator) {
	if (getGPA() == comparator.getGPA()
		&& getClassification() == comparator.getClassification()
		&& getID() == comparator.getID()) {
			return true;
	} else {
		return false;
	}
}

void studentType::addCourse(courseType *course1) {
	courses[numCourses] = new courseType(course1);
	numCourses++;
}
