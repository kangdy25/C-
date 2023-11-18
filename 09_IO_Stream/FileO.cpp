#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char filename[20];

	cout << "새로운 파일 이름을 입력하시오 : ";
	cin >> filename;
	cin.ignore(1, '\n');
	ofstream fout(filename);
	char ch;
	while (cin.get(ch)) {
		fout << ch;
	}
	fout.close();

	cout << "\n ------------ 파일의 내용 -------------\n";
	ifstream fin(filename);
	while (fin.get(ch))
		cout << ch;
	fin.close();
	return 0;
}
