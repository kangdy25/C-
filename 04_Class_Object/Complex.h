#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
	double rPart, iPart;
public: 
	Complex(double r = 0, double i = 0) : rPart(r), iPart(i) {}
	Complex conj() const {
		return Complex(rPart, -iPart);
	}
	Complex add(const Complex &c) const {
		return Complex(rPart + c.rPart, iPart + c.iPart);
	}
	Complex sub(const Complex &c) const {
		return Complex(rPart - c.rPart, iPart - c.iPart);
	}
	Complex mul(const Complex &c) const;
	Complex div(const Complex &c) const;
	void display() const;
};

#endif
