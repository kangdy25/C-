#ifndef INTARRAY1_H_INCLUDED
#define INTARRAY1_H_INCLUDED
#include <iostream>
#include <exception>
using namespace std;

const int DefaultSize = 10;
class Array {
	protected:
	int *buf;
	int size;
public:
	Array(int s = DefaultSize);
	virtual ~Array() {delete[] buf;}
	int &operator[](int offset);
	const int& operator[](int offset) const;
	int getsize() const {return size;}
	friend ostream& operator<<(ostream&, Array&);
	
	class BadIndex : public exception {
	public: 
		int wrongIndex;
		BadIndex(int n): wrongIndex(n), exception() {}
		virtual const char* what() const noexcept override {
			return "Array Exception::";
		}
	};
};
#endif
