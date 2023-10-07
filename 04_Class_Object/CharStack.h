#ifndef CHARSTACK_H_INCLUDED
#define CHARSTACK_H_INCLUDED

class CharStack {
	enum {size = 20};
	int top;
	char buf[size];
public:
	CharStack() : top {size} {}
	bool chkEmpty() const {
		return top == size;
	}
	bool chkFull() const {
		return !top;
	}
	bool push(char ch);
	char pop();
};
#endif
