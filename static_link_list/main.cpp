#include <iostream>

#include "static_link_list.h"
using std::cout;

int main() {
	list demo;
	demo.generate();
	demo.insert_to_tail(7, 7);
	demo.show();

	return 0;
}
