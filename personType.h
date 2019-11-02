#ifndef personType_H
#define personType_H

class personType {
	private: 
		string fName, lName, address, DOB;
		double height;
		char gender;
		//personType *mother;
		//personType *father;
	public:
		personType();
		personType(string, string);
		personType(string, string, string, double, string, char);
		
		personType(personType *person)
    		: fName(person->fName), 
    		lName(person->lName),
    		address(person->address),
    		DOB(person->DOB),
    		height(person->height),
    		gender(person->gender) {  }
		
		/*
		void setMother(personType*);
		void setFather(personType*);
		personType getMother();
		personType getFather();
		*/
		
		bool equals(personType);
		void setInfo(string, string, string, double, string, char);

		string getFName();
		string getLName();
		string getAddress();
		string getDOB();
		
		double getHeight();
		char getGender();
		virtual void print();
		
		static int personCount;
		
};

#endif