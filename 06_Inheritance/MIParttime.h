#ifndef MIPARTTIME_H_INCLUDED
#define MIPARTTIME_H_INCLUDED
#include <string>
#include "MIStudent.h"
#include "MIEmployee.h"
using namespace std;

class Parttime : public Student, public Employee {
public:
	Parttime(const string &s, const string &c) : Student(s), Employee(c) {}
};
#endif
