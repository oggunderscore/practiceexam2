#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

void printCourseAssignmentHeader(int x) {
	clear();
	if (x == 0) {
		cout << "\t -- Course Selection --\n" << endl;
	} else if (x == 1) {
		cout << "\t -- Student Selection --\n" << endl;
	}
	
}

void printCourseAssignmentMenu(courseType *courses[]) {
	printCourseAssignmentHeader(0);
	for (int x = 0; x < courseType::courseCount; x++) {
		cout << " " << x+1 << " > " << courses[x]->getTitle() << endl;
	}
	cout << "\n  Input >> ";
}

void printStudentAssignmentMenu(personType *persons[]) {
	printCourseAssignmentHeader(1);
	for (int x = 0; x < personType::personCount; x++) {
		cout << " " << x+1 << " > " << persons[x]->getFName() << " " << persons[x]->getLName() << endl;
	}
	cout << "\n  Input >> ";
}

void assignCourse(courseType *courses[], personType *persons[]) {
	
	char c;
	int selectedCourseIndex, selectedStudentIndex;
	
	printCourseAssignmentMenu(courses);
	
	cin >> c;
	
	if (c > 0 && c <= courseType::courseCount) {
		selectedCourseIndex = (int) c;
	}
	
	printStudentAssignmentMenu(persons);
	
	cin >> c;
	
	if (c > 0 && c <= personType::personCount) {
		selectedStudentIndex = (int) c;
	}
	
	persons[selectedStudentIndex]->addCourse(courses[selectedCourseIndex]); // woo...
	
	cout << "Course Set." << endl;
	
	
}