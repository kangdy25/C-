#include <iostream>
#include <cstring>
#include "IntArray2.h"
using namespace std;

Array::Array(int s) : size(s) {
	buf = new int[s];
	memset(buf, 0, sizeof(int)*s);
}

int& gArray::operator[](int offset) {
	if (offset < base)
		throw LowIndex(offset, base);
	if (offset >= (base + size))
		throw HighIndex(offset, base + size - 1);
	return buf[offset - base];
}

int gArray::operator[](int offset) const {
	if (offset < base)
		throw LowIndex(offset, base);
	if (offset >= (base + size))
		throw HighIndex(offset, base + size - 1);
	return buf[offset - base];
}

ostream& operator<<(ostream &os, gArray &garr) {
	int s = garr.getsize();
	int b = garr.getbase();
	for (int i = b; i < b+s; i++) {
		if (i % 5 == 0)
			os << endl;
		os << "[" << i << "] = " << garr[i] << " ";
	}
	return os;
}

int main() {
	gArray arr(2000, 10);
	try {
		for (int i = 2000; i <= 2010; i++)
			arr[i] = i;
		cout << arr << endl;
	} catch (const gArray::LowIndex &e) {
		cerr << e.what() << "--> " << e.wrongIndex << endl;
		cerr << "인덱스 하한 : " << e.lowBound << endl;
	} catch (const gArray::HighIndex &e) {
		cerr << e.what() << "--> " << e.wrongIndex << endl;
		cerr << "인덱스 상한 : " << e.highBound << endl;
	}
	return 0;
}
