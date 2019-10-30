#ifndef courseType_H
#define courseType_H

#include "header.h"
#include "studentType.h"

class courseType {
	private: 
		string sectionID, course, title, days, time, room;
		int cap, enrolled;
		bool open;
		studentType *students[]; // Is this Correct with []?
	public: 
		courseType(string, string, string, string, string, string, int);
		courseType(courseType &);
		void setSectionID(string);
		void setCourse(string);
		void setTitle(string);
		void setDays(string);
		void setTime(string);
		void setRoom(string);
		
		string getSectionID();
		string getCourse();
		string getTitle();
		string getDays();
		string getTime();
		string getRoom();
		
		int getCap();
		int getEnrolled();
		bool getOpen();
		
		bool addStudent(); // Red text what does it mean?
		
		void incEnrolled(); // Has - in UML what does it mean?
		
		void print();
		
		void printStudents(); // Also red text
		
};

#endif