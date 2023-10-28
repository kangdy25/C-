#ifndef SAFEINTARRAY_H_INCLUDED
#define SAFEINTARRAY_H_INCLUDED
#include <iostream>

class SafeIntArray {
	int limit;
	int *arr;
public:
	SafeIntArray(int n) : limit(n) {
		arr = new int[n];
	}
	~SafeIntArray() {
		delete[] arr;
	}
	int size() const { return limit; }
	int& operator[](int i) {
		if(i < 0 || i >= limit) {
			std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}
	int operator[](int i) const {
		if (i < 0 || i >= limit) {
			std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}
};
#endif
