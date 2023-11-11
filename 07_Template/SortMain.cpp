#include <iostream>
#include <cstring>
#include "SortFT.h"
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
	int x[10] = { 6, 3, 7, 2 ,4, 1, 8, 9, 5, 0 };
	sortFT(x, 10);
	for (auto i : x)
		cout << x[i] << " ";
	cout << endl;

	MyString s[5] = {"def", "abc", "xyz", "pqr", "ijk"};
	sortFT(s, 5);
	for (auto str : s)
		cout << str << " ";
	cout << endl;

	return 0;
}
