#include <iostream>

#include "stack.h"
using std::cout;

int main() {
	stack demo(4);
	demo.push(3);
	demo.push(4);
	demo.push(6);
	demo.pop();
	demo.show();

	return 0;
}
