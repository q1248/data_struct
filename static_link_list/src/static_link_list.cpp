#include "static_link_list.h"

node::node() {
	next = -1;
	data = 0;
}

node::node(int x) {
	next = -1;
	data = x;
}

list::list() { p = new node[10]; }

void list::generate() {
	auto one = node(1);
	one.next = 3;
	auto two = node(3);
	two.next = 5;
	auto three = node(5);
	three.next = -1;

	p[1] = one;
	p[3] = two;
	p[5] = three;
	head = p[1];
	length = 3;
}

bool list::insert_to_tail(int x, int index) {
	auto tmp = head;
	for (int i = 1; i < length - 1; i++) tmp = p[tmp.next];
	p[tmp.next].next = index;
	p[index] = node(x);
	length++;
	return true;
}

void list::show() {
	auto tmp = head;
	for (int i = 0; i < length; i++) {
		cout << tmp.data << " ";
		tmp = p[tmp.next];
	}
}
