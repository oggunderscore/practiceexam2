#ifndef professorType_H
#define professorType_H

#include "personType.h"

class professorType: public personType {
	private: 
		string employeeID, department, degree;
		courseType *courses[10];
		int numCourses;
	public:
		
		//Constructors
		professorType();
		professorType(string, string);
		professorType(string, string, string, string, string, string, double, string, char);
		
		//Setters
		void setEmployeeID(string);
		void setDepartment(string);
		void setDegree(string);
		
		//Getters
		string getEmployeeID();
		string getDepartment();
		string getDegree();
		
		//Functs
		void print();
		bool equals(professorType);
		
		void addCourse(courseType *);
		
		static int professorCount;
};

#endif