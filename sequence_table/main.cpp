#include <iostream>

#include "sequence_table.h"

using std::cout;

int main() {
	sequence_list demo(3);
	demo.insert_into_index(0, 4);
	demo.show();
	cout << "\n";
	demo.delete_element(1);
	demo.show();
	demo.insert_into_index(1, 100);

	cout << "\n";
	demo.show();

	return 0;
}
