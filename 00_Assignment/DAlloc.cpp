///////////////////////////////////////
// C++ 프로그래밍
// 서울지역대학 화상강의 ZOOM 9
// 학번 : 202334-243486
// 이름 : 강동윤
///////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
	int *intPtr;
	intPtr = new int[4];	// 4개의 int 값을 저장할 메모리 할당
	*intPtr = 10;			// intPtr[0] = 10;과 동일
	*(intPtr +  1) = 20;	// intPtr[1] = 20;과 동일
	intPtr[2] = 30;
	intPtr[3] = 40;
	for (int *p = intPtr, i = 0; i < 4; i++) 
		cout << p[i] << " "; // p가 가리키는 곳의 값을 출력한 후 p를 다음으로 이동
	cout << endl;
	delete[] intPtr; 		// (ㄱ)에서 할당한 메모리 반환
	return 0;
}


