#include <iostream>

#include "sequen.h"
using std::cout;

int main() {
	sequen demo(4);
	demo.in_quene(1);
	demo.in_quene(2);
	demo.in_quene(3);
	demo.in_quene(3);
	demo.in_quene(4);
	demo.out_quene();
	demo.out_quene();
	demo.out_quene();
	demo.out_quene();
	demo.out_quene();
	demo.show();

	return 0;
}
