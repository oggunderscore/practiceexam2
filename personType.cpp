#include "header.h"
#include "personType.h"

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

int personType::personCount = 0;

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
	cout << "   ><><><>< Person ><><><><" << endl;

	/*
	if (mother != 0) {
	    cout << " > Mother: " << mother->getFName() << " " << mother->getLName() << endl;
	} else {
	    cout << " > Mother: UNKNOWN" << endl;
	}
	if (father != 0) {
	    cout << " > Father: " << father->fName << " " << father->lName << endl;
	} else {
	    cout << " > Father: UNKNOWN" << endl;
	}
	*/
	
	cout << " > " << "First Name: " << fName << endl;
	cout << " > " << "Last Name: " << lName << endl;
	cout << " > " << "Address: " << address << endl;
	cout << " > " << "Height: " << height << endl;
	cout << " > " << "DOB: " << DOB << endl;
	cout << " > " << "Gender: " << gender << endl;
	cout << endl;
}
