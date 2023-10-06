#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person *p1 = new Person("강동윤", "서울시 강동구");
	Person *p2 = new Person("데이빗", "마다가스카르");
	p1->print();
	p2->print();
	cout << endl << "주소 변경 : ";
	p2->chAddr("남양주 화도");
	p2->print();
	delete p1;
	delete p2;
	return 0;
}
