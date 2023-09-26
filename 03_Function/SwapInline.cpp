#include <iostream>
using namespace std;

inline void SwapValues(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a, b;
	cout << "두 수를 입력하세요 : ";
	cin >> a >> b;
	if(a < b) SwapValues(a, b);
	cout << "큰 수 = " << a << "\n" << "작은 수 = " << b << endl;
	return 0;
}
