#pragma once
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

class quene {
       public:
	quene() = default;
	bool push(int x);
	int pop();
	void show();

       private:
	vector<int> value;
};

class quene_loop {};
