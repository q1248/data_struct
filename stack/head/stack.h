#pragma once
#include <iostream>

using std::cout;

class stack {
       public:
	// the structure of storage is sequence table
	stack(int capacity);
	bool push(int x);
	int pop();
	bool is_empty();
	bool is_full();
	int get_top();
	void show();

       private:
	int *p;	     // point to the bottom of the array
	int top;     // always log the index of the top of stack
	int length;  // current length of the stack
	int capacity;
};
