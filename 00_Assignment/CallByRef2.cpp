///////////////////////////////////////
// C++ 프로그래밍
// 서울지역대학 화상강의 ZOOM 9
// 학번 : 202334-243486
// 이름 : 강동윤
///////////////////////////////////////
#include <iostream>
using namespace std;

struct Rectangle {
	float x1, y1;		// 좌측 하단의 꼭짓점 좌표
	float x2, y2;		// 우측 하단의 꼭짓점 좌표
};

void inputData(Rectangle &r) {
	cout << "좌측 하단의 꼭짓점 좌표 x1 : ";
	cin >> r.x1;
	cout << "좌측 하단의 꼭짓점 좌표 y1 : ";
	cin >> r.y1;
	cout << "우측 하단의 꼭짓점 좌표 x2 : ";
	cin >> r.x2;
	cout << "우측 하단의 꼭짓점 좌표 x1 : ";
	cin >> r.y2;
}

void prData(const Rectangle &r) {
	cout << "가로 : " << r.x2 - r.x1 << endl; // 가로 길이 구하기
	cout << "세로 : " << r.y2 - r.y1 << endl; // 세로 길이 구하기
}

int area(const Rectangle &r) {
	return (r.x2 - r.x1) * (r.y2 - r.y1); // 넓이 구하기
}

int main() {
	Rectangle rectangle = {1, 2, 3, 4};
	inputData(rectangle);
	cout << "입력된 사각형의 정보" << endl;
	prData(rectangle);
	cout << "사각형의 면적 = " << area(rectangle) << endl;
}	

