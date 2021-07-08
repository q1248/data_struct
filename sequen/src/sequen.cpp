#include "sequen.h"

sequen::sequen(int capacity) {
	head = 0;
	tail = 0;
	length = 0;
	tag = 0;
	this->capacity = capacity;
	p = new int[capacity];
}

bool sequen::in_quene(int x) {
	// if (is_full()) return false;
	// if (is_full_two()) return false;
	if (is_full_three()) return false;
	p[tail] = x;
	tail = (tail + 1) % capacity;
	length = length + 1;
	// judge the flag
	if (head == tail)
		tag = 1;
	else
		tag = 0;

	return true;
}

int sequen::out_quene() {
	//	if (is_empty()) return false;
	if (is_empty_three()) return false;
	int result = p[head];
	head = (head + 1) % capacity;
	length--;

	if (head == tail)
		tag = 0;
	else
		tag = 1;
	return true;
}

bool sequen::is_empty() {
	if (head == tail) {
		return true;
	}
	return false;
}

bool sequen::is_full() {
	if ((tail + 1) % capacity == head) return true;
	return false;
}

void sequen::show() {
	if (head < tail) {
		for (int i = head; i < tail; i++) cout << p[i] << " ";
	}
	if (head > tail) {
		for (int i = head; i < capacity; i++) cout << p[i] << " ";
		for (int i = 0; i < tail; i++) cout << p[i] << " ";
	}
	if (head == tail) {
	}
}

bool sequen::is_full_two() {
	if (length == capacity) return true;
	return false;
}

bool sequen::is_full_three() {
	if (tag == 1 && head == tail) return true;
	return false;
}
bool sequen::is_empty_three() {
	if (head == tail && tag == 0) return true;

	return false;
}

