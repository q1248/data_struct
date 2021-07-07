#include "stack.h"

stack::stack(int capacity) {
	this->capacity = capacity;
	p = new int[capacity];
	length = 0;
	top = -1;
}
bool stack::push(int x) {
	if (is_full()) return false;
	top++;
	p[top] = x;
	return true;
}

int stack::pop() {
	if (is_empty()) return false;
	top--;
	return p[top + 1];
}

int stack::get_top() {
	if (is_empty()) return false;
	return p[top];
}

bool stack::is_full() {
	if (top == capacity) return true;
	return false;
}
bool stack::is_empty() {
	if (top == -1) return true;
	return false;
}
void stack::show() {
	cout << "The count of the stack is " << top + 1
	     << " and the values is :\n";

	for (int i = 0; i <= top; i++) {
		cout << p[i] << " ";
	}
}
