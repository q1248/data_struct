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
class linkstack {
       public:
	linkstack();
	bool push(int x);
	bool is_empty();
	int  pop();
	void show();

       private:
	int capcacity;
	node head;
	node p;
};
