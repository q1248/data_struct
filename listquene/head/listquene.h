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
class listquene {
       public:
	listquene();
	bool is_empty();
	bool in_quene(int x);
	int out_quene();
	void show();

       private:
	node head;
	node* tail;
	int length;
};
