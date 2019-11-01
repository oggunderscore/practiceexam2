#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

void createNewCourse(courseType *courses[]) {
	
	string tSectionID, tCourse, tTitle, tDays, tTime, tRoom;
	int tCap;
	
	courseType::courseCount++;
	
	printCourseCreateMenu();
	cout << " Section ID > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tSectionID);
	
	printCourseCreateMenu();
	cout << " Course > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tCourse);
	
	printCourseCreateMenu();
	cout << " Title > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tTitle);
	
	printCourseCreateMenu();
	cout << " Days > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tDays);

	printCourseCreateMenu();
	cout << " Time > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tTime);
	
	printCourseCreateMenu();
	cout << " Room > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tRoom);
	
	printCourseCreateMenu();
	cout << " Capacity > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> tCap;
	
	courses[courseType::courseCount] = new courseType(tSectionID, tCourse, tTitle, tDays, tTime, tRoom, tCap, 0, true);
	
	printCourseCreateMenu();
	cout << "\t<+> Creation Successful <+>" << endl;
	
	cout << tSectionID << endl;
	cout << tCourse << endl;
	cout << tTitle << endl;
	cout << tDays << endl;
	cout << tTime << endl;
	cout << tRoom << endl;
	cout << tCap << endl;
	
	courses[courseType::courseCount]->print();
	
	cin.ignore(1000, '\n');
	pause();
	
}



void createNewPerson(personType *persons[]) {
	
	string tFName, tLName, tAddress, tDOB;
	double tHeight;
	char tGender;
	int pType;
	
	string tClassification, tID;
	double tGPA;
	
	string tEmployeeID, tDepartment, tDegree;
	
	personType::personCount++;
	
	cin.ignore(1000, '\n');
	
	printPersonCreateMenu();
	cout << " Enter Type of Person: ";
	cin >> pType;
	
	cin.ignore(1000, '\n');
	
	printPersonCreateMenu();
	cout << " First Name > ";
	getline(cin, tFName);
	
	printPersonCreateMenu();
	cout << " Last Name > ";
	getline(cin, tLName);
	
	printPersonCreateMenu();
	cout << " Address > ";
	getline(cin, tAddress);
	
	printPersonCreateMenu();
	cout << " DOB > ";
	getline(cin, tDOB);

	printPersonCreateMenu();
	cout << " Height > ";
	cin >> tHeight;
	
	cin.ignore(1000, '\n');
	
	printPersonCreateMenu();
	cout << " Gender > ";
	cin >> tGender;
	
	cin.ignore(1000, '\n');
	
	if (pType == 1) {
		persons[personType::personCount] = new personType(tFName, tLName, tAddress, tHeight, tDOB, tGender);
		
		
		
	} else if (pType == 2) {
		
		printPersonCreateMenu();
		cout << " ID > ";
		cin >> tID;
		
		cin.ignore(1000, '\n');
		
		printPersonCreateMenu();
		cout << " GPA > ";
		cin >> tGPA;
		
		cin.ignore(1000, '\n');
		
		printPersonCreateMenu();
		cout << " Classification > ";
		cin >> tClassification;
		
		persons[personType::personCount] = new studentType(tFName, tLName, tAddress, tHeight, tDOB, tGender, tGPA, tClassification, tID);
		
		
		
	} else if (pType == 3) {
		
		printPersonCreateMenu();
		cout << " Employee ID > ";
		cin >> tEmployeeID;
		
		cin.ignore(1000, '\n');
		
		printPersonCreateMenu();
		cout << " Degree > ";
		getline(cin, tDegree);
		
		printPersonCreateMenu();
		cout << " Department > ";
		getline(cin, tDepartment);
		
		persons[personType::personCount] = new professorType(tEmployeeID, tDepartment, tDegree, tFName, tLName, tAddress, tHeight, tDOB, tGender);
		
		
		
	}
	printPersonCreateMenu();
	cout << "\t<+> Creation Successful <+>" << endl;
	cout << endl;
	persons[personType::personCount]->print();
	
	pause();
	
}
