#include "linkstack.h"

node::node(int x) {
	this->data = x;
	this->next = nullptr;
}

node::node() {
	this->next = nullptr;
	this->data = 0;
}

linkstack::linkstack() {
	// set the value of head node equals to the length of the list;
	head.data = 0;
	head.next = nullptr;
}

bool linkstack::is_empty() {
	if (head.next == nullptr) return true;
	return false;
}

bool linkstack::push(int x) {
	auto tmp = head.next;
	head.next = new node(x);
	head.next->next = tmp;
	return true;
}

int linkstack::pop() {
	if (is_empty()) return -1;
	int data = head.next->data;
	head.next = head.next->next;
	return data;
}

void linkstack::show() {
	auto tmp = head.next;
	while (tmp->next != nullptr) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << tmp->data;
}
