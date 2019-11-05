#include "header.h"
#include "courseType.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
#include "collegeType.h"

void createNewCourse(courseType *courses[]) {
	
	string tSectionID, tCourse, tTitle, tDays, tTime, tRoom;
	int tCap;

	
	printCourseCreateMenu();
	cout << " Section ID > ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, tSectionID);
	
	printCourseCreateMenu();
	cout << " Course > ";
	getline(cin, tCourse);
	
	printCourseCreateMenu();
	cout << " Title > ";
	getline(cin, tTitle);
	
	printCourseCreateMenu();
	cout << " Days > ";
	getline(cin, tDays);

	printCourseCreateMenu();
	cout << " Time > ";
	getline(cin, tTime);
	
	printCourseCreateMenu();
	cout << " Room > ";
	getline(cin, tRoom);
	
	printCourseCreateMenu();
	cout << " Capacity > ";
	cin >> tCap;
	
	courses[courseType::courseCount] = new courseType(tSectionID, tCourse, tTitle, tDays, tTime, tRoom, tCap, 0, true);
	
	courseType::courseCount++;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}



void createNewPerson(personType *persons[], studentType *students[], professorType *professors[], collegeType *college) {
	
	string tFName, tLName, tAddress, tDOB;
	double tHeight;
	char tGender;
	int pType;
	
	string tClassification, tID;
	double tGPA;
	
	string tEmployeeID, tDepartment, tDegree;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	printPersonCreateMenu();
	cout << " Enter Type of Person: ";
	cin >> pType;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
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
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	printPersonCreateMenu();
	cout << " Gender > ";
	cin >> tGender;
	
	if (tGender == 'F') {
		college->incFemales();
	} else if (tGender == 'M') {
		college->incMales();
	}
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	if (pType == 1) {
		persons[personType::personCount] = new personType(tFName, tLName, tAddress, tHeight, tDOB, tGender);
		
		personType::personCount++;
		
	} else if (pType == 2) {
		
		printPersonCreateMenu();
		cout << " ID > ";
		cin >> tID;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		printPersonCreateMenu();
		cout << " GPA > ";
		cin >> tGPA;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		printPersonCreateMenu();
		cout << " Classification > ";
		cin >> tClassification;
		
		students[studentType::studentCount] = new studentType(tFName, tLName, tAddress, tHeight, tDOB, tGender, tGPA, tClassification, tID);
		
		studentType::studentCount++;
		
	} else if (pType == 3) {
		
		printPersonCreateMenu();
		cout << " Employee ID > "; 
		cin >> tEmployeeID;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		printPersonCreateMenu();
		cout << " Degree > ";
		getline(cin, tDegree);
		
		printPersonCreateMenu();
		cout << " Department > ";
		getline(cin, tDepartment);
		
		professors[professorType::professorCount] = new professorType(tEmployeeID, tDepartment, tDegree, tFName, tLName, tAddress, tHeight, tDOB, tGender);
		
		professorType::professorCount++;
		
	}
	
}
