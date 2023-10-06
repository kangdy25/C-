#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char *name, const char *addr) {
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	this->addr = new char[strlen(addr)+1];
	strcpy(this->addr, addr);
	cout << "Person 객체 생성함(" << name << ")" << endl;
}

Person::~Person() {
	cout << "Person 객체 제거함(" << name << ")" << endl;
	delete [] name;
	delete [] addr;
}

void Person::print() const {
	cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char* newAddr) {
	delete [] addr;
	addr = new char[strlen(newAddr)+1];
	strcpy(addr, newAddr);
}

int main() {
	Person* p1 = new Person("강동윤", "서울시 강동구");
	Person* p2 = new Person("데이빗", "마다가스카르");
	p1->print();
	p2->print();
	cout << endl << "주소 변경 : ";
	p1->chAddr("남양주 화도");
	p1->print();
	cout << "주소 변경 : ";
	p2->chAddr("남양주 화도");
	p2->print();
	delete p1;
	delete p2;
	return 0;
}
