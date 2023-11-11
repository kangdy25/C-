#include <iostream>
#include <cstring>
#include "SwapFT.h"
#include "MyString.h"

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
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	swapFT(x, y);
	cout << "값 교환 후 --> ";	
	cout << "x = " << x << ", y = " << y << endl << endl;

	MyString s1("GACHON"), s2("Liberal Arts");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	swapFT(s1, s2);	
	cout << "값 교환 후 --> ";	
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}
