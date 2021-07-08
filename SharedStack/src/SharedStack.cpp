#include "SharedStack.h"

stack::stack(int cap) {
	capacity = cap;
	top1 = -1;
	top2 = capacity;
	p = new int[capacity];
}

bool stack::stack1_push(int x) {
	if (is_full()) return false;
	top1++;
	p[top1] = x;
	return true;
}

bool stack::stack2_push(int x) {
	if (is_full()) return false;
	top2--;
	p[top2] = x;
	return true;
}

int stack::stack1_pop() {
	if (stack1_is_empty()) return false;
	top1--;
	return p[top1 + 1];
}
int stack::stack2_pop() {
	if (stack2_is_empty()) return false;
	top2++;
	return p[top2 - 1];
}

bool stack::is_full() {
	if (top1 + 1 == top2) return true;
	return false;
}

bool stack::stack1_is_empty() {
	if (top1 == -1) return true;
	return false;
}

bool stack::stack2_is_empty() {
	if (top2 == -1) return true;
	return false;
}

void stack::show() {
	cout << "the value of stack1 is : \n";
	for (int i = 0; i <= top1; i++) cout << p[i] << " ";
	cout << "\nthe value of stack2 is: \n";
	for (int i = capacity - 1; i >= top2; i--) cout << p[i] << " ";
}
