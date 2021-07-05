#pragma once

#include <iostream>

using std::cout;

class node {
       public:
	int data;
	node* next;
	node();
	node(int x);
};
class list {
       public:
	// construct a empty node
	list();

	list(int cap);

	// insert the new element to the head of the list ,but the head is the
	// first
	bool insert_to_head(int x);
	// insert the new element to the end of the list
	bool insert_to_tail(int x);

	int  get_value_by_index(int index);

	node* get_address_by_value(int value);

	bool insert_to_the_index(int index, int x);

	bool delete_the_node(int index);

	int get_length();
	void show();

       private:
	int capcacity;
	int length;
	node head;
	node p;
};

