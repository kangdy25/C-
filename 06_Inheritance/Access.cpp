#include <iostream>
using namespace std;

class BaseC {
	int a;
protected:
	int b;
public:
	int c;
	int geta() const { return a; }
	void set(int x, int y, int z) {
		a = x;
		b = y;
		c = z;
	}
};

class Drvd1 : public BaseC {
public:
	void printbc() const {
		cout << b << ' ' << c << '\n';
	}
};

class Drvd2 : protected BaseC {
	void printbc() const {
		cout << b << ' ' << c << '\n';
	}
};

class Drvd3 : private BaseC {
	void printbc() const {
		cout << b << ' ' << c << '\n';
	}
};

int main() {
	Drvd1 d1;
	// d1.a = 1; 요건 private 에러
	// d1.b = 2; 요건 protected 에러
	d1.c = 3;

	Drvd2 d2;
	// d2.a = 1; 요건 private 에러
	// d2.b = 2; 요건 protected 에러
	// d2.c = 3; 요건 protected 에러
	
	Drvd3 d3;
	// d3.a = 1; 요건 private 에러
	// d3.b = 2; 요건 private 에러
	// d3.c = 3; 요건 private 에러

	return 0;
}

