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

void printProfessorAssignmentMenu(professorType *professors[]) {
	printCourseAssignmentHeader(1);
	for (int x = 0; x < professorType::professorCount; x++) {
		cout << " " << x+1 << " > " << professors[x]->getFName() << " " << professors[x]->getLName() << endl;
	}
	cout << "\n  Input >> ";
}

void assignCourseToStudent(courseType *courses[], studentType *students[], collegeType *college) {
	
	if (courseType::courseCount != 0 && studentType::studentCount != 0) {
		int c;
		int selectedCourseIndex, selectedStudentIndex;
		
		printCourseAssignmentMenu(courses);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
		
		//if (c > 0 && c <= courseType::courseCount) {
			selectedCourseIndex = c;
			selectedCourseIndex--;
		//}
		
		printStudentAssignmentMenu(students);
		
		cin >> c;
		
		//if (c > 0 && c <= studentType::studentCount) {
			selectedStudentIndex = c;
			selectedStudentIndex--;
		//}
		cout << "INDEX: " << selectedCourseIndex << " & " << selectedStudentIndex << endl;
		
		students[selectedStudentIndex]->addCourse(courses[selectedCourseIndex]); // woo...
		
		courses[0]->collegeIncCensus(college);
		cout << "Course Set." << endl;
		pause();
	} else {
		cout << "\nERROR: No courses or students available.\n" << endl;
		pause();
	}
	
	
}

void assignProfessorToCourse(courseType *courses[], professorType *professors[], collegeType *college) {
	
	if (courseType::courseCount != 0 && professorType::professorCount != 0) {
		int c;
		int selectedCourseIndex, selectedProfessorIndex;
		
		printCourseAssignmentMenu(courses);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
		
		//if (c > 0 && c <= courseType::courseCount) {
			selectedCourseIndex = c;
			selectedCourseIndex--;
		//}
		
		printProfessorAssignmentMenu(professors);
		
		cin >> c;
		
		//if (c > 0 && c <= studentType::studentCount) {
			selectedProfessorIndex = c;
			selectedProfessorIndex--;
		//}
		cout << "INDEX: " << selectedCourseIndex << " & " << selectedProfessorIndex << endl;
		
		professors[selectedProfessorIndex]->addCourse(courses[selectedCourseIndex]); // woo...
		
		// !!! Increase? !!!
		courses[0]->collegeIncCensus(college);
		cout << "Course Set." << endl;
		pause();
	} else {
		cout << "\nERROR: No courses or professors available.\n" << endl;
		pause();
	}
	
	
}