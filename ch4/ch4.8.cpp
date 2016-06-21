#include <iostream>

using namespace std;

struct Stack {
  struct Link {
    void* data;
    Link* next;
    void initialize(void* data, Link* next);
  }* head;
  void initialize();
  void push(void* dat);
  void* peek();
  void* pop();
  void cleanup();
};

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

int main() {
	Stack s;
	s.initialize();
	for (int i = -5; i < 13; i++) {
		double* val = new double; //mem leak
		*val = i + 0.25;
		s.push(val);
	}
	double* p=static_cast<double*>(s.pop());
	while (p != 0) {
		cout << *p << endl;
		p=static_cast<double*>(s.pop());
	}
	s.cleanup();
	return 0;
}
