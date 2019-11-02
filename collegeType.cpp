#include "header.h"
#include "collegeType.h"

collegeType::collegeType() {
	name = "Saddleback College";
	censusNumber = 0;
}

void collegeType::setNameID(string name1) {
	name = name1;
}

string collegeType::getName() {
	return name;
}
int collegeType::getCensusNumber() {
	return censusNumber;
}

void collegeType::print() {
	cout << "College Name > \"" << name << "\"\n > Students: " << censusNumber << endl;
}
void collegeType::incrementCensus() {
	censusNumber++;
}