#ifndef serendipity_H
#define serendipity_H

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

void pause();
void clear();

void printMenu();
void printCourseCreateMenu();
void printPersonCreateMenu();

void createNewCourse(courseType *[]);
void createNewPerson(personType *[]);

#endif