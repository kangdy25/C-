#include <iostream>
#include <cstring>
#include "NamedObj.h"
using namespace std;

NamedObj::NamedObj(const char *s) {
	name = new char[strlen(s) + 1];
	strcpy(name, s);
	id = ++nConstr;
}

NamedObj::~NamedObj() {
	++nDestr;
	delete[] name;
}

int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;

void f() {
	NamedObj x("Third");
	x.display();
}

int main() {
	cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");
	c.display();
	cout << "NamedObj 클래스의 객체 수 : "<< NamedObj::nObj() << endl;
	return 0;
}
