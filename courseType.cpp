#include "header.h"
#include "courseType.h"
#include "collegeType.h"

int courseType::courseCount = 0;

//Constructors
courseType::courseType() {
	
}

courseType::courseType(string sectionID1, string course1, string title1, string days1, string time1, string room1, int cap1, int enrolled1, bool open1) {
	sectionID = sectionID1;
	course = course1;
	title = title1;
	days = days1;
	time = time1;
	room = room1;
	cap = cap1;
	enrolled = enrolled1;
	open = open1;
}
courseType::courseType( courseType &otherCourse) {
	sectionID = otherCourse.getSectionID();
	course = otherCourse.getCourse();
	title = otherCourse.getTitle();
	days = otherCourse.getDays();
	time = otherCourse.getTime();
	room = otherCourse.getRoom();
	cap = otherCourse.getCap();
	enrolled = otherCourse.getEnrolled();
	open = otherCourse.getOpen();
}


//Setters
void courseType::setSectionID(string sectionID1) {
	sectionID = sectionID1;
}
void courseType::setCourse(string course1) {
	course = course1;
}
void courseType::setTitle(string title1) {
	title = title1;
}
void courseType::setDays(string days1) {
	days = days1;
}
void courseType::setTime(string time1) {
	time = time1;
}
void courseType::setRoom(string room1) {
	room = room1;
}

//Getters
string courseType::getSectionID() {
	return sectionID;
}
string courseType::getCourse() {
	return course;
}
string courseType::getTitle() {
	return title;
}
string courseType::getDays() {
	return days;
}
string courseType::getTime() {
	return time;
}
string courseType::getRoom() {
	return room;
}
int courseType::getCap() {
	return cap;
}
int courseType::getEnrolled() {
	return enrolled;
}
bool courseType::getOpen() {
	return open;
}

//Other Functs
bool courseType::addStudent() {
	//??
}
void courseType::incEnrolled() {
	enrolled++;
}
void courseType::print() {
	cout << sectionID << "\t " << course << "\t " << title << "\t " << days << "\t " << time << "\t " << cap << "\t " << enrolled << "\t " << open << endl;
}
void courseType::printStudents() {
	//Print Stuff
}

void courseType::collegeIncCensus(collegeType *college) {
	college->incrementCensus();
	cout << "INCREMENT CENSUS! " << college->getCensusNumber() << endl;
}
