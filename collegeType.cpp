#include "header.h"
#include "collegeType.h"

string collegeType::name;
int collegeType::censusNumber = 0;
int collegeType::fNumber = 0;
int collegeType::mNumber = 0;
int collegeType::females = 0;
int collegeType::males = 0;


void collegeType::setNameID(string name1) {
	name = name1;
}

string collegeType::getName() {
	return name;
}
int collegeType::getCensusNumber() {
	return censusNumber;
}
int collegeType::getCensusF() {
	return fNumber;
}
int collegeType::getCensusM() {
	return mNumber;
}
int collegeType::getFemales() {
	return females;
}
int collegeType::getMales() {
	return males;
}

void collegeType::print() {
	cout << "College Name > \"" << name << "\"\n > Students: " << censusNumber << endl;
}
void collegeType::incrementCensus() {
	censusNumber++;
}
void collegeType::incrementF() {
	fNumber++;
}
void collegeType::incrementM() {
	mNumber++;
}

void collegeType::incFemales() {
	females++;
}
void collegeType::incMales() {
	males++;
}