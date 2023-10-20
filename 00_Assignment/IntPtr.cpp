///////////////////////////////////////
// C++ 프로그래밍
// 서울지역대학 화상강의 ZOOM 9
// 학번 : 202334-243486
// 이름 : 강동윤
///////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
	int a  = 10, b = 100;
	int *ptr = &a;		// 포인터 ptr을 선언한 후에 a의 주소를 넣는다.

	cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;
	*ptr = 20;			// ptr이 가리키는 곳에 20을 저장
	cout << "변수 a의 값 : " << a << endl;
	ptr = &b;			// ptr이 b를 가리키게 함
	cout << "변수 b의 값 : " << *ptr << endl; // ptr은 b의 주소값을 가진다.
	return 0;
}

