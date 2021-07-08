#include <iostream>

#include "SharedStack.h"
using std::cout;

int main() {
	stack demo(4);
	demo.stack1_push(0);
	demo.stack1_push(2);
	demo.stack2_push(4);
	demo.stack2_push(5);
	demo.stack2_push(6);
	demo.stack2_pop();

	demo.show();

	return 0;
}
