#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include <iostream>
#include "Figure.h"
using namespace std;

class Circle : public Figure {
	double cx, cy;
	double radius;
public:
	Circle(double x, double y, double r) : cx(x), cy(y), radius(r) {}

	void move(double dx, double dy);
	void scale(double s);
	void draw() const;
};

#endif
