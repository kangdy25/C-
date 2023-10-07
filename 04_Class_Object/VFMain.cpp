#include <iostream>
#include "VecF.h"
using namespace std;

int main() {
	float a[3] = { 1, 2, 3 };
	float b[3] = { 2, 4, 6 };
	VecF v1(3, a);
	VecF v2(3, b);
	v1.print();
	cout << " + ";
	v2.print();
	cout << " = ";
	v3.print();
	cout << endl;
	return 0;
}