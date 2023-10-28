#include <iostream>
#include "SafeIntArray.h"
using namespace std;

int main() {
	SafeIntArray a(10);
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	cout << a[5] << endl;
	cout << a[12] << endl;
	return 0;
}
