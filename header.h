#ifndef header_H
#define header_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ios>
#include <limits>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <algorithm>

using namespace std;

class collegeType;
class courseType;
class personType;
class studentType;
class professorType;

void pause();
void clear();

void printMenu();
void printCourseCreateMenu();
void printPersonCreateMenu();

void createNewCourse(courseType *[]);
void createNewPerson(personType *[]);

void printAllPeople(personType *[]);
void printAllCourses(courseType *[]);

void assignCourse(courseType *[], personType *[]);

#endif