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
		static int females;
		static int males;
		static void incFemales();
		static void incMales();
		static int getFemales();
		static int getMales();
		static void print();
		
		
		
};

#endif