#pragma once
#include <iostream>
using std::cout;

// the implement of loop sequen
class sequen {
       public:
	sequen(int cap);
	bool in_quene(int x);
	int out_quene();
	bool is_empty();
	bool is_full();
	// this is the same with is_empty
	bool is_empty_two();
	bool is_empty_three();
	bool is_full_two();
	bool is_full_three();
	int get_head();
	void show();

       private:
	// point to the head element
	int head;
	// point to the next element of end element
	int tail;
	int *p;
	// belong to the method of add length number:two
	int length;
	int capacity;

	// belong to the tag method :three
	int tag;
};
