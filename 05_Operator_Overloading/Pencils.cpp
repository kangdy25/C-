#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() {
	if(++np >= 12)
		++dozens, np = 0;
	return *this;
}

Pencils Pencils::operator++(int n) {
	Pencils tmp(*this);
	if(++np >= 12)
		++dozens, np = 0;
	return tmp;
}

void Pencils::display() const {
	if (dozens) {
		cout << dozens << "타";
		if (np) cout << np << "자루";
		cout << endl;
	} else {
		cout << np << "자루" << endl;
	}
}

int main() {
	Pencils p1(5, 7);
	Pencils p2(23);
	
	p1.display();
	(++p1).display();
	p1.display();
	cout << endl;
	p2.display();
	p1 = p2++;

	p1.display();
	p2.display();
	return 0;
}
