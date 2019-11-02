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

void printStudentAssignmentMenu(studentType *students[]) {
	printCourseAssignmentHeader(1);
	for (int x = 0; x < studentType::studentCount; x++) {
		cout << " " << x+1 << " > " << students[x]->getFName() << " " << students[x]->getLName() << endl;
	}
	cout << "\n  Input >> ";
}

void assignCourse(courseType *courses[], studentType *students[], collegeType *college) {
	
	char c;
	int selectedCourseIndex, selectedStudentIndex;
	
	printCourseAssignmentMenu(courses);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> c;
	
	if (c > 0 && c <= courseType::courseCount) {
		selectedCourseIndex = (int) c;
	}
	
	printStudentAssignmentMenu(students);
	
	cin >> c;
	
	if (c > 0 && c <= personType::personCount) {
		selectedStudentIndex = (int) c;
	}
	
	students[selectedStudentIndex]->addCourse(courses[selectedCourseIndex]); // woo...
	
	courses[0]->collegeIncCensus(college);
	cout << "Course Set." << endl;
	
	
}