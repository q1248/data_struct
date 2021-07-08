#pragma once

#include <iostream>
using std::cout;

class stack {
       public:
	stack()=default;
	stack(int cap);
	bool stack1_push(int x);
	bool stack2_push(int x);
	int stack1_pop();
	int stack2_pop();
	bool stack1_is_empty();
	bool stack2_is_empty();
	bool is_full();
	int get_top();
	void show();

       private:
	int *p;
	int top1;
	int top2;
	int capacity;
};
