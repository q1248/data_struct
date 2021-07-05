#include <iostream>

#include "list.h"

using std::cout;

int main() {
	list demo(3);

	// demo.insert_to_tail(5);
	// demo.insert_to_tail(6);
	// demo.insert_to_head(7);
	demo.insert_to_the_index(3, 11);
	auto x = demo.get_address_by_value(1);
	int value = demo.get_value_by_index(0);
	demo.delete_the_node(1);
	auto length = demo.get_length();
	demo.show();

	cout << "\nthe value of x is " << x->data
	     << " and the value of value is " << value << " the length is "
	     << length;
	return 0;
}
