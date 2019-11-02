#ifndef collegeType_H
#define collegeType_H

#include "header.h"
#include "courseType.h"

class collegeType {
	private: 
		string name;
		int censusNumber;
		void incrementCensus();
		friend class courseType;
	public: 
		collegeType();
		void setNameID(string);
		string getName();
		int getCensusNumber();
		void print();
		
		
};

#endif