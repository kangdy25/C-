#ifndef GRATTRIB_H_INCLUDED
#define GRATTRIB_H_INCLUDED
#include <string>
using namespace std;

class GrAttrib {
	string lineColor;
	string fillColor;
public:
	GrAttrib() : lineColor("검정색"), fillColor("흰색") {}
	GrAttrib(const string &lc, const string &fc) 
		: lineColor(lc), fillColor(fc) {}

	void setLineColor(const string &lc) {
		lineColor = lc;
	}
	void setFillColor(const string &fc) {
		fillColor = fc;
	}
	string getLineColor() const {
		return lineColor;
	}
	string getFillColor() const {
		return fillColor;
	}
};
extern GrAttrib curAttrib;
#endif
