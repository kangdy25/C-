#include <iostream>

using namespace std;

int main() {
	int max;
	int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

	max = data[0]; // data의 0번 값을 max로 지정함
	cout << "데이터: " << data[0]; // 0번 데이터 출력
	for (int i = 1; i < 10; i++) {
		cout << " " << data[i]; // i번 데이터 출력
		if (max < data[i]) max = data[i]; // i번 데이터 비교
	}
	cout << "\n\n 배열의 최댓값: " << max << endl;
	return 0;
}
