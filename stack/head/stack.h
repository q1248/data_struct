#pragma once 
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class stack{
				public:
								stack();
								bool push(int x);
								bool  pop();
								void show();
				private:
								int count;
								vector<int> value={};
};
