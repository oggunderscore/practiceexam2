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
		cout << " " << x << " > " << courses[x]->getTitle() << endl;
	}
	cout << "\n  Input >> ";
}

void printStudentAssignmentMenu(studentType *students[]) {
	printCourseAssignmentHeader(1);
	for (int x = 0; x < studentType::studentCount; x++) {
		cout << " " << x << " > " << students[x]->getFName() << " " << students[x]->getLName() << endl;
	}
	cout << "\n  Input >> ";
}

void printProfessorAssignmentMenu(professorType *professors[]) {
	printCourseAssignmentHeader(1);
	for (int x = 0; x < professorType::professorCount; x++) {
		cout << " " << x << " > " << professors[x]->getFName() << " " << professors[x]->getLName() << endl;
	}
	cout << "\n  Input >> ";
}

void assignCourseToStudent(courseType *courses[], studentType *students[], collegeType *college) {
	
	if (courseType::courseCount != 0 && studentType::studentCount != 0) {
		int c;
		int selectedCourseIndex, selectedStudentIndex;
		
		
		
		printStudentAssignmentMenu(students);
		
		cin >> c;
		
		selectedStudentIndex = c;
		
		printCourseAssignmentMenu(courses);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
		
		selectedCourseIndex = c;
		
		if (courses[selectedCourseIndex]->getCap() - courses[selectedCourseIndex]->getEnrolled() > 0 && courses[selectedCourseIndex]->getOpen() == true) {
			courses[selectedCourseIndex]->addStudentToCourse(students[selectedStudentIndex]);
			courses[selectedCourseIndex]->incEnrolled();
			courses[0]->collegeIncCensus(college);
			
			if (students[selectedStudentIndex]->getGender() == 'F') {
				courses[0]->collegeIncCensusF(college);
			} else if (students[selectedStudentIndex]->getGender() == 'M') {
				courses[0]->collegeIncCensusM(college);
			}
			
			
		} else {
			cout << "\nERROR: Course is full. (" << courses[selectedCourseIndex]->getEnrolled() << "/" << courses[selectedCourseIndex]->getCap() << ")\n" << endl;
			pause();
		}
		
		
	} else {
		cout << "\nERROR: No courses or students available.\n" << endl;
		pause();
	}
	
	
}

void assignProfessorToCourse(courseType *courses[], professorType *professors[], collegeType *college) {
	
	if (courseType::courseCount != 0 && professorType::professorCount != 0) {
		int c;
		int selectedCourseIndex, selectedProfessorIndex;
		
		
		
		printProfessorAssignmentMenu(professors);
		
		cin >> c;
		
		selectedProfessorIndex = c;
		
		printCourseAssignmentMenu(courses);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
		
		selectedCourseIndex = c;
				
		professors[selectedProfessorIndex]->addCourse(courses[selectedCourseIndex]); // woo...
		
	} else {
		cout << "\nERROR: No courses or professors available.\n" << endl;
		pause();
	}
	
	
}