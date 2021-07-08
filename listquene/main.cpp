#include <iostream>

#include "listquene.h"
using std::cout;

int main() {
	listquene demo;
	demo.in_quene(1);
	demo.in_quene(2);
	demo.in_quene(3);
	demo.in_quene(4);
	demo.in_quene(5);
	demo.out_quene();
	demo.show();

	return 0;
}
