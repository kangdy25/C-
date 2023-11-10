#ifndef CBEMPLOYEE_H_INCLUDED
#define CBEMPLOYEE_H_INCLUDED
#include <iostream>
#include <string>
#include "CBPerson.h"
class Employee : public Person {
	string company;
public:
	Employee(const string &n, const string &c) : Person(n), company(c) {}
	void print() const { 
		Person::print();
		cout << " is employed by " << company << endl; 
	}
};
#endif
