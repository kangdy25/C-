#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) {
	if (chkFull()) {
		cout << "스택이 가득 차 있습니다." << endl;
		return false;
	}
	buf[--top] = ch;
	return true;
}

char CharStack::pop() {
	if (chkEmpty()) {
		cout << "스택이 비어있습니다." << endl;
		return 0;	
	}
	return buf[top++];
}

int main() {
	CharStack chStack;
	char str[20];

	cout << "영단어를 입력하세요 : ";
	cin >> str;

	char *pt = str;
	while (*pt)
		chStack.push(*(pt++));
	
	cout << "역순 단어 출력 : ";
	while (!chStack.chkEmpty())
		cout << chStack.pop();
	cout << endl;
	return 0;
}
