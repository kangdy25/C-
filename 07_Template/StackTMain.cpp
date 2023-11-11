#include <iostream>
#include <cstring>
#include "StackT.h"
#include "MyString.h"
using namespace std;

MyString::MyString(int s) : len(0), bufSize(s) {
	buf = new char[s+1];
	buf[0] = '\0';
}

MyString::MyString() : len(0), bufSize(0) {
	buf = new char[1];
	buf[0] = '\0';
}

MyString::MyString(const char *str) {
	len = bufSize = strlen(str);
	buf = new char[len + 1];
	strcpy(buf, str);
}

MyString::MyString(const MyString &mstr) : len(mstr.len), bufSize(mstr.len) {
	buf = new char[len + 1];
	strcpy(buf, mstr.buf);
}

MyString::MyString(MyString &&mstr) : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf) {
	mstr.buf = nullptr;
}

MyString::~MyString() {
	delete[] buf;
}

int MyString::length() const {
	return len;
}

MyString& MyString::operator=(const MyString &mstr) {
	if (bufSize < mstr.len) {
		delete[] buf;
		len = bufSize = mstr.len;
		buf = new char[len + 1];
	} else {
		len = mstr.len;
	}
	strcpy(buf, mstr.buf);	
	return *this;
}

MyString& MyString::operator=(MyString &&mstr) {
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = mstr.buf;
	mstr.buf = nullptr;
	return *this;
}

MyString MyString::operator+(const MyString &mstr) const {
	MyString tmstr(len + mstr.len);	
	strcpy(tmstr.buf, buf);	
	strcpy(tmstr.buf + len, mstr.buf);	
	return tmstr;
}

MyString& MyString::operator+=(const MyString &mstr) {
	if (bufSize < len + mstr.len) {
		bufSize = len += mstr.len;
		char* tbuf = new char[len + 1];
		strcpy(tbuf, buf);	
		delete[] buf;
		buf = tbuf;
	}
	strcat(buf, mstr.buf);	
	return *this;
}

bool MyString::operator==(const MyString &mstr) const {
	return !strcmp(buf, mstr.buf);
}

bool MyString::operator>(const MyString &mstr) const {
	return strcmp(buf, mstr.buf) > 0;
}

bool MyString::operator<(const MyString &mstr) const {
	return strcmp(buf, mstr.buf) < 0;
}

char& MyString::operator[](int i) {
	return buf[i];
}

char MyString::operator[](int i) const {
	return buf[i];
}

int main() {
	Stack<char> sc(100);
	sc.push('a');
	sc.push('b');
	cout << "CHAR STACK : ";
	while (!sc.empty())
		cout << sc.pop();
	cout << endl;

	Stack<int> si(5);
	si.push(5);
	si.push(10);
	cout << "INT STACK : ";
	while (!si.empty())
		cout << si.pop() << " ";
	cout << endl;

	Stack<MyString> msStack(10);
	MyString s1("GACHON");
	MyString s2("Liberal");
	MyString s3(" Arts");
	msStack.push(s1);
	msStack.push(s2 + s3);
	cout << "MyString STACK : ";
	while (!msStack.empty())
		cout << msStack.pop() << " ";
	cout << endl;
	return 0;
}
