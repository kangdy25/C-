#include <iostream>

using namespace std;

void SwapValues(int &x, int &y);

int main() {
	int a, b;
	cout << "두 수를 입력하세요 : ";
	cin >> a >> b;
	if(a < b) SwapValues(a, b); // 순서를 바꿔 a에 큰 값을 넣음
	cout << "큰 수 = " << a << "\n" << "작은 수 = " << b << endl;
	
	return 0;
}

void SwapValues(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
