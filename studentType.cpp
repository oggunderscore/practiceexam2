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
	numCourses = 0;
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

void studentType::printFromCourse() {
	cout << this->getFName();
	cout << endl;
}

void studentType::print() {
	personType::print();
	cout << left << "   " << setw(8) << id << " " << setw(10) << classification << "           " << setw(4) << gpa << "   " << setw(11) << numCourses << endl;
	//Print courses
	if (numCourses != 0) {
		cout << "\n                                                                                                 Section ID Course Name      Title                     Days  Time                Cap Enrolled\n                                                                                                 ------------------------------------------------" << endl;
		for (int x = 0; x < numCourses; x++) {
			string status;
			if (courses[x]->getOpen() == true)
				status = true;
			else 
				status = false;
			cout << "                                                                                                 " << left << setw(10) << courses[x]->getSectionID() << " " << setw(11) << courses[x]->getCourse() << " " << setw(30) << courses[x]->getTitle() << " " << setw(4) << courses[x]->getDays() << " " << setw(20) << courses[x]->getTime() << " " << setw(3) << courses[x]->getCap() << " " << setw(8) << courses[x]->getEnrolled() << " " << setw(6) << status << endl;
			//cout << "                                                                                                 " << setw(10) << courses[x]->getSectionID() << " " << setw(15) << courses[x]->getCourse() << " " << setw(20) << courses[x]->getTitle() << endl;
		}
	}
	
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
	if (course1->addStudent() == true) {
		if (numCourses <= 1) {
			courses[numCourses] = course1;
			numCourses++;
		} else {
			cout << "ERROR: STUDENT HAS TOO MANY COURSES!" << endl;
			pause();
		}
	} else {
		cout << "ERROR: COURSE IS FULL." << endl;
		pause();
	}
}
