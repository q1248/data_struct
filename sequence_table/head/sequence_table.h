#pragma once

#include <iostream>

using std::cout;

class sequence_list {
       public:
	// initalize a list without any elements
	sequence_list();
	// initalize a list with the length of cap
	sequence_list(int cap);
	// get the length of list
	int get_length();
	// return the element acording to the index
	int locate_by_index(int index);
	// return the first index acording to the value
	int locate_by_value(int value);
	// insert a element acording to the index
	bool insert_into_index(int index, int x);
	// delete the element acording to the index
	bool delete_element(int index);

	bool is_empty();
	void show();

       private:
	int length;
	int capcity;
	int *p;
};
