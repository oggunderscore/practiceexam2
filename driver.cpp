#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
#include "collegeType.h"

//--------------------------------------------------------//
// File Name: driver.cpp
// Project name: Exam 2
//--------------------------------------------------------
// Creators name and email: Kevin Nguyen, oggunderscore@gmail.com
// Creation Date: 10/30/19
// Date of Last Modification: 11/5/19
//--------------------------------------------------------//
// Purpose: This project represents my skill into using 
// pointers to determine a database of people, students
// professors, courses, and other information to be organized
// and represented through various functions.
//--------------------------------------------------------//
// Algorithm: 
// After gathering inputted data, follow through exam 
// desired functions as well as present the data 
// appropriately.
//--------------------------------------------------------//
//                Data Dictionary
// Constants
// 
// Name           Data Type             Initial Value
// ----------     --------------        ------------------//
// N/A
// 
// Variables
// 
// Name           Data Type             Initial Value
// ----------     --------------        ------------------//
// totalPeopleCount int                 0   
// c              char                  null
// validInput     bool                  false
// exitMain       bool                  false    
// courses        courseType*[]         null
// persons        personType*[]         null 
// students       studentType*[]        null
// professors     professorType*[]      null
// college        collegeType*[]        null
//--------------------------------------------------------//

int main() {
	
	int totalPeopleCount = 0;
	
	char c;
	bool validInput = false, exitMain = false;
	
	courseType *courses[10];
	personType *persons[10];
	studentType *students[10];
	professorType *professors[10];
	collegeType *college;
	college->setNameID("Saddleback College");
	
	
	do {
		do {
			clear();
			cout << "Total Courses: " << courseType::courseCount << endl;
			cout << "Total People: " << totalPeopleCount << endl;
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
				createNewPerson(persons, students, professors, college);
				totalPeopleCount++;
			} else if (c == '3') {
				//Assign Course to Student / Person
				validInput = true;
				assignCourseToStudent(courses, students, college);
			} else if (c == '4') {
				//Assign Instructor
				validInput = true;
				assignProfessorToCourse(courses, professors, college);
			} else if (c == '5') {
				//Print people
				validInput = true;
				printAll(persons, students, professors, courses);
			} else if (c == '6') {
				//Print Courses
				validInput = true;
				printAllCourses(courses);
			} else if (c == '7') {
				//Print Census
				validInput = true;
				printCensus(college);
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
