#include "quene.h"

bool quene::push(int x) {
	value.push_back(x);
	return true;
}

int quene::pop() {
	int result = value.at(0);

	for (int i = 0; i < value.size() - 1; i++)
		std::swap(value.at(i), value.at(i + 1));

	value.pop_back();
	return result;
}

void quene::show() {
	cout << "the  number of quene is " << value.size()
	     << " and the left is \n";
	for (auto i : value) cout << i << " ";
}

