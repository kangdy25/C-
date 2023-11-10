#ifndef VBSTUDENT_H_INCLUDED
#define VBSTUDENT_H_INCLUDED
#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

class Student : virtual public Person {
	string school;
public:
	Student(const string &n, const string &s) : Person(n), school(s) {}
	void print() const {
		Person::print();
		cout << " goes to " << school << endl; 
	}
};
#endif
