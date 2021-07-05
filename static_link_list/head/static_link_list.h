#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class node {
       public:
	node();
	node(int x);

	int next;
	int data;
};

class list {
       public:
	list();

	void generate();

	// must be the true index,this function cant jude index
	bool insert_to_tail(int x, int index);

	bool delete_from_index(int index);

	void show();

       private:
	node head;
	int length;
	int capacity;
	node* p;
};
