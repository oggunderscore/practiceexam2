#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

void printAllPeople(personType *persons[]) {
	
	clear();
	cout << "\t-- Person Database --\n" << endl;
	
	for (int x = 0; x < personType::personCount; x++) {
		persons[x]->print();
		//print their courses?
	}
	
}

void printAllCourses(courseType *courses[]) {
	
	clear();
	cout << "\t-- Course Database --\n" << endl;
	
	for (int x = 0; x < courseType::courseCount; x++) {
		courses[x]->print();
	}
	
}