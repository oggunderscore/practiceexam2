#include "header.h"
#include "personType.h"

int personType::personCount = 0;

/*
void personType::setFather(personType *father1) {
    father = father1;
}

void personType::setMother(personType *mother1) {
    mother = mother1;
}

personType personType::getFather() {
	return *father;
}
personType personType::getMother() {
	return *mother;
}
*/


personType::personType() {
	//mother = nullptr;
	//father = nullptr;
	fName = "EMPTY";
	lName = "EMPTY";
	address = "EMPTY";
	height = 0.0;
	DOB = "EMPTY";
	gender = 'N';

}
personType::personType(string f, string l) {
	//mother = nullptr;
	//father = nullptr;
	fName = f;
	lName = l;
	address = "EMPTY";
	height = 0.0;
	DOB = "EMPTY";
	gender = 'N';
}
personType::personType(string f, string l, string a, double h, string d,
		char g) {
	//mother = nullptr;
	//father = nullptr;
	fName = f;
	lName = l;
	address = a;
	height = h;
	DOB = d;
	gender = g;
}
bool personType::equals(personType comparator) {
	if (getFName() == comparator.getFName()
			&& getLName() == comparator.getLName()
			&& getAddress() == comparator.getAddress()
			&& getHeight() == comparator.getHeight()
			&& getDOB() == comparator.getDOB()
			&& getGender() == comparator.getGender()) {
		return true;
	} else {
		return false;
	}
}
void personType::setInfo(string fName1, string lName1, string address1,
		double height1, string DOB1, char gender1) {
	fName = fName1;
	lName = lName1;
	address = address1;
	DOB = DOB1;
	height = height1;
	gender = gender1;
}

string personType::getFName() {
	return fName;
}
string personType::getLName() {
	return lName;
}
string personType::getAddress() {
	return address;
}
string personType::getDOB() {
	return DOB;
}
double personType::getHeight() {
	return height;
}
char personType::getGender() {
	return gender;
}
void personType::print() {
	cout << fixed;
	cout.precision(2);
	cout << left << setw(10) << fName << " " << setw(15) << lName << "   " << setw(40) << address << " " << setw(6) << height << " " << setw(10) << DOB << " " << setw(6) << gender;
}
