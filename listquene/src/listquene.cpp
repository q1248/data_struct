#include "listquene.h"

node::node(int x) {
	this->data = x;
	this->next = nullptr;
}

node::node() {
	this->next = nullptr;
	this->data = 0;
}

listquene::listquene() {
	length = 0;

	tail = nullptr;
}

bool listquene::is_empty() {
	if (head.next == nullptr) return true;
	return false;
}

bool listquene::in_quene(int x) {
	if (length == 0) {
		head.next = new node(x);
		length++;
		return true;
	}
	auto tmp = head.next;
	while (tmp->next != nullptr) tmp = tmp->next;
	tail = new node(x);
	tmp->next = tail;
	length++;
	return true;
}

int listquene::out_quene() {
	if (is_empty()) return false;
	auto tmp = head.next;
	auto data = tmp->next;
	head.next = tmp->next;
	length--;
	return true;
}

void listquene::show() {
	auto tmp = head.next;
	while (tmp->next != nullptr) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << tmp->data;
}
