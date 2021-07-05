
#include "list.h"

node::node(int x) {
	this->data = x;
	this->next = nullptr;
}

node::node() {
	this->next = nullptr;
	this->data = 0;
}

list::list() {
	// set the value of head node equals to the length of the list;
	head.data = 0;
	head.next = nullptr;
	length = 0;
}

// initalize a list
list::list(int len) {
	length = len;
	head.data = len;
	length = len;
	head.next = new node(0);
	auto tmp = head.next;
	for (int i = 0; i < length - 1; i++) {
		tmp->next = new node(i + 1);
		tmp = tmp->next;
	}
}

bool list::insert_to_tail(int x) {
	auto tmp = head.next;
	while (tmp->next != nullptr) tmp = tmp->next;

	tmp->next = new node(x);
	length++;

	return true;
}

bool list::insert_to_head(int x) {
	auto tmp = head.next;
	head.next = new node(x);
	head.next->next = tmp;
	length++;
	return true;
}

void list::show() {
	auto tmp = head.next;
	for (int i = 0; i < length; i++) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

bool list::insert_to_the_index(int index, int x) {
	if (index < 1 || index > length) return false;
	auto tmp = head.next;
	for (int i = 1; i < index; i++) tmp = tmp->next;
	auto swap = tmp->next;
	tmp->next = new node(x);
	tmp->next->next = swap;
	length++;
	return true;
}

node* list::get_address_by_value(int value) {
	auto tmp = head.next;
	node* result;
	while (tmp != nullptr) {
		if (tmp->data == value) {
			result = tmp;
			return result;
			break;
		}
		tmp = tmp->next;
	}
	return nullptr;
}

int list::get_value_by_index(int index) {
	auto tmp = head.next;
	for (int i = 1; i < index; i++) tmp = tmp->next;
	return tmp->data;
}

bool list::delete_the_node(int index) {
	if (index < 1 || index > length) return false;
	auto tmp = head.next;
	for (int i = 1; i < index - 1; i++) tmp = tmp->next;
	auto next = tmp->next->next;
	delete tmp->next;
	tmp->next = next;
	length--;
	return true;
}


int list::get_length(){

				return length;
}
