#ifndef courseType_H
#define courseType_H

#include "header.h"
#include "studentType.h"
#include "professorType.h"

class courseType {
	private: 
		string sectionID, course, title, days, time, room;
		int cap, enrolled;
		bool open;
		studentType *students[30];
		void printStudents(); // Also red text
		friend class professorType;
	public: 
		courseType();
		courseType(string, string, string, string, string, string, int, int, bool);
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
		
		bool addStudent();
		
		void incEnrolled();
		
		void print();
		
		//void printStudents(); // Also red text
		
		static int courseCount;
		
		void collegeIncCensus(collegeType *college);
		void collegeIncCensusF(collegeType *college);
		void collegeIncCensusM(collegeType *college);
		
		void addStudentToCourse(studentType *student);
};

#endif