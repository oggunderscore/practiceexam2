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
	
	cout << "Name                         Address                                  Height DOB        Gender\n----------------------------------------------------------------------------------------------\n" << endl;

	for (int x = 0; x < personType::personCount; x++) {
		persons[x]->print();
		cout << endl;
	}
	
}

void printAllStudents(studentType *students[]) {
	
	
	for (int x = 0; x < studentType::studentCount; x++) {
		cout << "\n                                                                                                 ID       Classification       GPA    Course Load\n                                                                                                 ------------------------------------------------" << endl; 
		students[x]->print();
	}
}

void printAllProfessors(professorType *professors[], courseType *courses[]) {
	
	
	for (int x = 0; x < professorType::professorCount; x++) {
		cout << "\n                                                                                                 ID       Department             Degree\n                                                                                                 ------------------------------------------------" << endl; 
		professors[x]->print();
		for (int y = 0; y < professors[x]->getNumCourses(); y++) {
			professors[x]->printStudentsInCourse(courses[y]);
		}
	}
}

void printAllCourses(courseType *courses[]) {
	
	clear();
	
	cout << "Section ID Course Name Title                          Days Time                 Cap Enrolled Status\n---------------------------------------------------------------------------------------------------" << endl;
	if (courseType::courseCount != 0) {
		for (int x = 0; x < courseType::courseCount; x++) {
			courses[x]->print();
		}
	} else {
		cout << "\nERROR: There are 0 instances in this database!\n" << endl;
	}
	cout << endl;
	pause();
	
}

void printCensus(collegeType *college) {
	clear();
	cout << "\t-- " << college->getName() << " Census --\n" << endl;
	cout << " Enrollments > " <<  college->getCensusNumber() << endl;
	cout << " Enrollments (Female) > " <<  college->getCensusF() << endl;
	cout << " Enrollments (Male) > " <<  college->getCensusM() << endl;
	cout << " Female Population > " <<  college->getFemales() << endl;
	cout << " Male Population > " <<  college->getMales() << endl;

	cout << endl;
	pause();
}