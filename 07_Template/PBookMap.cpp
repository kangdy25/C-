#include <iostream>
#include <string>
#include <map>
using namespace std;

template<typename T>
class LESS_T {
public:
	bool operator()(const T &a, const T &b) const {
		return a < b;
	}
};

int main() {
	map<string, string, LESS_T<string>> pBook {
		{"Enzo", "010-8291-8291"},
		{"Gallagher", "010-0691-0691"},
	};
	pBook["Caicedo"] = "010-1234-5678";

	pBook.insert(make_pair("Nkunku", "010-3489-5689"));
	pBook.insert({"Enzo", "010-2378-1284"});

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb)
		cout << pb->first << " " << pb->second << endl;
	cout << pBook.size() << "명이 등록되어 있습니다." << endl;

	string str;
	cout << endl << "찾을 이름 : ";
	cin >> str;
	auto result = pBook.find(str);
	if (result != pBook.end()) {
		cout << result->first << "님의 전화번호는 : ";
		cout << result->second << "입니다." << endl;
	} else {
		cout << str << "님을 찾을 수 없습니다." << endl;
	}
	return 0;
}
