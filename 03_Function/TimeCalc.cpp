#include <iostream>

using namespace std;

struct TimeRec {
	int hours;
	int minutes;
};

void AddTime(TimeRec &t1, const TimeRec  &t2) {
	t1.minutes += t2.minutes;
	t1.hours += t2.hours + t1.minutes / 60;
	t1.minutes %= 60;
}

void AddTime(TimeRec &t, int minutes) {
	t.minutes += minutes;
	t.hours += t.minutes / 60;
	t.minutes %= 60;
} 

int main() {
	TimeRec tRec1 = {2, 30};
	TimeRec tRec2 = {1, 45};

	cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
	cout << tRec2.hours << "시간 " << tRec2.minutes << "분 = ";
	AddTime(tRec1, tRec2);
	cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;
	
	cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
	cout << "135분 = ";
	AddTime(tRec1, 135);
	cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;

	return 0;
}
