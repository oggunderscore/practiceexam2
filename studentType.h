#ifndef studentType_H
#define studentType_H

#include "personType.h"

class studentType: public personType {
	private:
        string classification, id;
        double gpa;
    public:
        studentType();
        studentType(string, string);
        studentType(string, string, double, string, string);
		studentType(string, string, string, double, string, char, double, string, string);

        void setGPA(double);
        void setID(string);
        void setClassification(string);

        double getGPA();
        string getID();
        string getClassification();

        void print();
        bool equals(studentType);
};

#endif