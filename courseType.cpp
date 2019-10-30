#include "header.h"
#include "courseType.h"


//Constructors
courseType::courseType(string sectionID1, string course1, string title1, string days1, string time1, string room1, int cap1, int enrolled1, bool open1) {
	
}
courseType::courseType(courseType &course) {
	
}


//Setters
void courseType::setSectionID(string sectionID1) {
	sectionID = sectionID1;
}
void courseType::setCourse(string course1) {
	course1 = course;
}
void courseType::setTitle(string title1) {
	title1 = title;
}
void courseType::setDays(string days1) {
	days1 = days;
}
void courseType::setTime(string time1) {
	time1 = time;
}
void courseType::setRoom(string room1) {
	room1 = room;
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
	//???
}
void courseType::incEnrolled() {
	enrolled++;
}
void courseType::print() {
	cout << sectionID << "\t " << course << "\t " << setw(50) << title << setw(0) << "\t " << days << "\t " << time << "\t " << cap << "\t " << enrolled << "\t " << open << endl;
}
void courseType::printStudents() {
	//Print Stuff
}