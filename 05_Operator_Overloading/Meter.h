#ifndef METER_H_INCLUDED
#define METER_H_INCLUDED
#include <iostream>
using namespace std;

class Meter {
	int m;
	int cm;
public:
	Meter() : m(0), cm(0) {}
	Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
	void display() const {
		if (m)
			cout << m << "m ";
		if (cm || !m)
			cout << cm << "cm";
		cout << endl;
	}
	int getM() const {return m;}
	int getCm() const {return cm;}
};
#endif
