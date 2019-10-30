#ifndef collegeType_H
#define collegeType_H

#include "header.h"

class collegeType {
	private: 
		string name;
		int censusNumber;
		void incrementCensus();
	public: 
		void setNameID(string);
		string getName();
		int getCensusNumber();
		void print();
		
		
};

#endif