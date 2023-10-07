#include <iostream>
#include "Complex.h"
using namespace std;

Complex Complex::mul(const Complex &c) const {
	double r = rPart * c.rPart - iPart * c.iPart;
	double i = rPart * c.rPart + iPart * c.iPart;
	return Complex(r, i);
}


Complex Complex::div(const Complex &c) const {
	double d = c.rPart * c.rPart + c.iPart * c.iPart;
	Complex	c1 = mul(c.conj());
	return Complex(c1.rPart/d, c1.iPart/d);
}

void Complex::display() const {
	cout << "(" << rPart;
	if(iPart > 0)
		cout << "+j" << iPart;
	else if(iPart < 0) {
		cout << "-j" << -iPart;
	}
	cout << ")";
}

int main() {
	Complex c1(1, 2);
	Complex c2(2, 3);
	Complex c3 = c1.add(c2);
	c1.display();
	cout << " + ";
	c2.display();
	cout << " = ";
	c3.display();
	cout << endl;

	c3 = c1.mul(10.0);
	c1.display();
	cout << " * 10 = ";
	c3.display();
	cout << endl;

	return 0;
}
