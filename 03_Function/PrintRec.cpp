#include <iostream>

using namespace std;

struct SalesRec {
	char pID[10];
	int dYear, dMonth, dDate;
	char deliverAdd[40];
};

void PrSalesRec(const SalesRec &srec);

int main() {
	SalesRec s = {"CHJ123DA", 2023, 9, 26, "서울시 강동구 길동400"};
	PrSalesRec(s);
	return 0;
}

void PrSalesRec(const SalesRec &srec) {
	cout << "품목코드 : " << srec.pID << endl;
	cout << "배달일자 : " << srec.dYear << "년 ";
	cout << srec.dMonth << "월 ";
	cout << srec.dDate << "일" << endl;;
	cout << "배달주소 : " << srec.deliverAdd << endl;

}
