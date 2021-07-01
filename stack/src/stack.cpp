#include "stack.h"

stack::stack() {}
bool stack::push(int x) {
	value.push_back(x);
	return true;
}

bool stack::pop() {
	value.pop_back();
	return true;
}

void stack::show() {
	cout << "The count of the stack is " << value.size()
	     << " and the values is :\n";

	for (int i = 0; i < value.size(); i++) {
		cout << i << " ";
	}
}
