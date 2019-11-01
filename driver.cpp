#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

//get me out

int main() {
	
	char c;
	bool validInput = false, exitMain = false;
	
	courseType *courses[10];
	personType *persons[10];
	collegeType *college;
	
	
	do {
		do {
			clear();
			cout << "Total Courses: " << courseType::courseCount << endl;
			cout << "Total People: " << personType::personCount << endl;
			cout << "Total Professors: " << professorType::professorCount << endl;
			cout << "Total Students: " << studentType::studentCount << endl;
			printMenu();
			
			cin >> c;
			
			if (c == '1') {
				//Create New Course
				validInput = true;
				createNewCourse(courses);
			} else if (c == '2') {
				//Create New Person
				validInput = true;
				createNewPerson(persons);
			} else if (c == '3') {
				//Assign Course to Student / Person
				validInput = true;
				//assignCourse(courses, persons);
				college->incrementCensus();
			} else if (c == '4') {
				
				validInput = true;
				
			} else if (c == '5') {
				//Print people
				validInput = true;
				printAllPeople(persons);
			} else if (c == '6') {
				//Print Courses
				validInput = true;
				printAllCourses(courses);
			} else if (c == '7') {
				
				validInput = true;
				
			} else if (c == '8') {
				cout << "\nExiting Program..." << endl;
				pause();
				clear();
				validInput = true;
				exitMain = true;
			} else {
				clear();
				cout << "ERROR: Invalid Input!" << endl;
				pause();
			}
		} while (validInput == false);
	} while (exitMain != true);
	
	
	
	return 0;
	
}
