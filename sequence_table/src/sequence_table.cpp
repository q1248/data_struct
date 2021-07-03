#include "sequence_table.h"

sequence_list::sequence_list() {
	length = 0;
	capcity = 0;
	p = nullptr;
}

sequence_list::sequence_list(int cap) {
	length = 2;
	capcity = cap;
	p = new int[cap];
	p[0] = 0;
	p[1] = 1;
}

int sequence_list::get_length() { return length; }

int sequence_list::locate_by_index(int index) {
	if (index >= 0 && index < capcity) return p[index];
	cout << "the index is not proper";
	return -1;
}

int sequence_list::locate_by_value(int value) {
	int index = -1;
	for (int i = 0; i < capcity; i++)
		if (p[i] == value) {
			index = i;
			break;
		}
	// if the value of index is -1,we dont't find the value
	return index;
}

bool sequence_list::insert_into_index(int index, int x) {
	if (capcity == length) return false;
	// only have the cast that the index is proper
	int tmp;
	tmp = x;
	for (int i = index; i < length + 1; i++) std::swap(p[i], tmp);
	length++;
	return true;
}

bool sequence_list::delete_element(int index) {
	for (int i = index; i < length ; i++) std::swap(p[i], p[i + 1]);

	length--;

	return true;
}

bool sequence_list::is_empty() {
	if (length == 0) return true;
	return false;
}

void sequence_list::show() {
	for (int i = 0; i < length; i++) {
		cout << p[i] << " ";
	}
}
