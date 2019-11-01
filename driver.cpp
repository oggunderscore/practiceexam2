#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

//get me out


void printMenu() {
	cout << "=========================\n 1 > Create New Course\n 2 > Create New Person\n 3 > Enroll Student\n 4 > Assign Instructor\n 5 > Print all People\n 6 > Print all Courses\n 7 > Print Census\n 8 > Quit\n=========================\n Input >> ";
}

void printCourseCreateMenu() {
	clear();
	cout << "\t\t-- Course Creation --\n" << endl;
}

void createNewCourse(courseType *courses[]) {
	
	string tSectionID, tCourse, tTitle, tDays, tTime, tRoom;
	int tCap;
	
	courseType::courseCount++;
	
	printCourseCreateMenu();
	cout << " Section ID > ";
	getline(cin, tSectionID);
	
	printCourseCreateMenu();
	cout << " Course > ";
	getline(cin, tCourse);
	
	printCourseCreateMenu();
	cout << " Title > ";
	getline(cin, tTitle);
	
	printCourseCreateMenu();
	cout << " Days > ";
	getline(cin, tDays);

	printCourseCreateMenu();
	cout << " Time > ";
	getline(cin, tTime);
	
	printCourseCreateMenu();
	cout << " Room > ";
	getline(cin, tRoom);
	
	cin.ignore(1000, '\n');
	printCourseCreateMenu();
	cout << " Capacity > ";
	cin >> tCap;
	
	courses[courseType::courseCount] = new courseType(tSectionID, tCourse, tTitle, tDays, tTime, tRoom, tCap, 0, true);
	
	printCourseCreateMenu();
	cout << "\t<+> Creation Successful <+>" << endl;
	
	cout << tSectionID << endl;
	cout << tCourse << endl;
	cout << tTitle << endl;
	cout << tDays << endl;
	cout << tTime << endl;
	cout << tRoom << endl;
	cout << tCap << endl;
	
	courses[courseType::courseCount]->print();
	
	cin.ignore(1000, '\n');
	pause();
	
}

int main() {
	
	char c;
	bool validInput = false, exitMain = false;
	
	courseType *courses[10];
	
	
	
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
				
			} else if (c == '3') {
				
				validInput = true;
				
			} else if (c == '4') {
				
				validInput = true;
				
			} else if (c == '5') {
				
				validInput = true;
				
			} else if (c == '6') {
				
				validInput = true;
				
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
