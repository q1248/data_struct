#include <iostream>

#include "linkstack.h"
using std::cout;

int main() {
	linkstack demo;
	demo.push(1);
	demo.push(2);
	demo.push(3);
	demo.pop();
	demo.show();

	return 0;
}
