#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
#include "collegeType.h"

void printAll(personType *persons[], studentType *students[], professorType *professors[], courseType *courses[]) {
	clear();
	if (personType::personCount != 0) {
		printAllPeople(persons);
	}
	if (studentType::studentCount != 0) {
		printAllStudents(students);
	}
	if (professorType::professorCount != 0) {
		printAllProfessors(professors, courses);
	}
	
	if (personType::personCount == 0 && studentType::studentCount == 0 && professorType::professorCount == 0) {
		cout << "\n\t-- Database Manager  --\n" << endl;
		cout << "\nERROR: There are no people, students, or professors in the database!\n" << endl;
	}
	pause();
}

void printAllPeople(personType *persons[]) {
	
	cout << "\n\t-- Person Database --\n" << endl;

	for (int x = 0; x < personType::personCount; x++) {
		persons[x]->print();
	}
	
}

void printAllStudents(studentType *students[]) {
	
	cout << "\n\t-- Student Database --\n" << endl;
	
	for (int x = 0; x < studentType::studentCount; x++) {
		students[x]->print();
	}
}

void printAllProfessors(professorType *professors[], courseType *courses[]) {
	
	cout << "\n\t-- Professor Database --\n" << endl;
	
	for (int x = 0; x < professorType::professorCount; x++) {
		professors[x]->print();
		cout << "\nStudents enrolled in course for professor above:\n" << endl;
		for (int y = 0; y < professors[x]->getNumCourses(); y++) {
			cout << "Accessing Professor " << x << " for students in course " << y << " out of " << professors[x]->getNumCourses() << endl;
			professors[x]->printStudentsInCourse(courses[y]);
		}
	}
}

void printAllCourses(courseType *courses[]) {
	
	clear();
	cout << "\t-- Course Database --\n" << endl;
	
	
	if (courseType::courseCount != 0) {
		for (int x = 0; x < courseType::courseCount; x++) {
			courses[x]->print();
		}
	} else {
		cout << "\nERROR: There are 0 instances in this database!\n" << endl;
	}
	pause();
	
}

void printCensus(collegeType *college) {
	clear();
	cout << "\t-- College Census --\n" << endl;
	cout << " Enrollments > " <<  college->getCensusNumber() << endl;
	cout << endl;
	pause();
}