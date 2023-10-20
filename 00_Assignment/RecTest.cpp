///////////////////////////////////////
// C++ 프로그래밍
// 서울지역대학 화상강의 ZOOM 9
// 학번 : 202334-243486
// 이름 : 강동윤
///////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	int &aRef = a;		// a를 참조하는 참조 변수 aRef를 선언
	cout << "a의 값 : " << a << endl;
	cout << "aRef가 참조하는 값 : " << aRef << endl << endl;
	aRef = 100;			// aRef에 100 대입 (참조 변수이기에 a의 값도 100이 된다)
	cout << "a의 값 : " << a << endl;
	aRef = b;			// aRef에 b의 값(20) 대입 (aRef는 a에 대한 참조 변수이기에 a의 값은 20이 된다)
	cout << "a의 값 : " << a << endl;
	return 0;
}


