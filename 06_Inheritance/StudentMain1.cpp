#include <iostream>
#include "Person1.h"
#include "Student1.h"
using namespace std;

int main() {
	Person dudley;
	dudley.setName("Dudley");
	Student harry;
	harry.setName("Harry");
	harry.setSchool("Hogwarts");
	dudley.print();
	cout << endl;
	harry.print();
	cout << endl;
	harry.Person::print();
	cout << endl;
	return 0;
}
