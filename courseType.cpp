#include "header.h"
#include "courseType.h"
#include "collegeType.h"
#include "studentType.h"

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
	
	string status;
	
	if (open == 1) {
		status = "Open";
	} else if (open == 0) {
		status = "Closed";
	}

	cout << left << setw(10) << sectionID << " " << setw(11) << course << " " << setw(30) << title << " " << setw(4) << days << " " << setw(20) << time << " " << setw(3) << cap << " " << setw(8) << enrolled << " " << setw(6) << status << endl;
}
void courseType::printStudents() {
	//Print Stuff
	cout << "\t -- Students Enrolled in Course List --\n" << endl;
	for (int x = 0; x < enrolled; x++) {
		cout << "Printing student " << x << " out of " << enrolled << endl;
		cout << students[x]->getFName() << endl;
	}
}

void courseType::collegeIncCensus(collegeType *college) {
	college->incrementCensus();
}
void courseType::collegeIncCensusF(collegeType *college) {
	college->incrementF();
}
void courseType::collegeIncCensusM(collegeType *college) {
	college->incrementM();
}


void courseType::addStudentToCourse(studentType *student) {
	student->courses[student->numCourses] = this;
	student->numCourses++;
}
