#include "Stack2.h"

void Stack::Link::initialize(void* data, Link* next) {
	this->data = data;
	this->next = next;
}

void Stack::initialize() {
	head = 0;
}

void Stack::push(void* data) {
	Link* node = new Link;
	node->initialize(data, head);
	head = node;
}

void Stack::cleanup() {
	Link* node = head;
	while (node != 0) {
		Link* nxt = node->next;
		delete node;
		node = nxt;
	}
}

void* Stack::peek() {
	if (head != 0)
		return head->data;
	return 0;
}

void* Stack::pop() {
	void* ret_value = 0;
	if (head != 0) {
		ret_value = head->data;
		Link* node = head->next;
		delete head;
		head = node;
	}
	return ret_value;
}
