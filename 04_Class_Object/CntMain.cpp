#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
	Counter cnt(9);
	cnt.reset();
	cout << "계수기의 현재 값: " << cnt.getValue() << endl;
	for (int i = 0; i < 12; i++) {
		cnt.count();
		cout << "계수기의 현재 값: " << cnt.getValue() << endl;
	}
	return 0;
}
