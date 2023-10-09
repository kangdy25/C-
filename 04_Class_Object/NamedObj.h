#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj {
	char *name;
	int id;
	static int nConstr;
	static int nDestr;
public:
	NamedObj(const char *s);
	~NamedObj();
	void display() const {
		cout << "ID : " << "--> 이름: " << name << endl;
	}
	static int nObj() {
		return nConstr-nDestr;
	}
};
#endif
