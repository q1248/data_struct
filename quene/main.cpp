#include <iostream>

#include "quene.h"

using std::cout;

int main() {
	quene demo;
	demo.push(3);
	demo.push(5);
	demo.push(7);
	demo.pop();
	demo.show();

	return 0;
}
