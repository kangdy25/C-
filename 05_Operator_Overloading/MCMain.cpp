#include <iostream>
#include "Meter.h"
#include "Feet.h"

int main() {
	Meter mLen;
	Feet fLen(10, 5);
	mLen = fLen;
	fLen.display();
	mLen.display();
	fLen = mLen;
	fLen.display();
	return 0;
}
