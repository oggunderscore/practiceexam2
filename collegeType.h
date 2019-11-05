#ifndef collegeType_H
#define collegeType_H

#include "header.h"
#include "courseType.h"

class collegeType {
	private: 
		static string name;
		static int censusNumber;
		static int fNumber;
		static int mNumber;
		static void incrementCensus();
		static void incrementF();
		static void incrementM();
		friend class courseType;
	public: 
		static void setNameID(string);
		static string getName();
		static int getCensusNumber();
		static int getCensusF();
		static int getCensusM();
		static void print();
		
		
		
};

#endif