#include <iostream>
using namespace std;

struct Node {
	Node* next;
	int value;
	void create_list(int count);
	void print_list();
};

void Node::create_list(int count) {
	Node* tail = this;
	for (int i = 0; i < count; i++) {
		tail->next = new Node;
		tail = tail->next;
		tail->next = nullptr;
		tail->value = i;
	}
}

void Node::print_list() {
	Node* tail = this;
	while (tail != nullptr) {
		cout << tail->value << endl;
		tail = tail->next;
	}
}

int main() {
	Node n = {nullptr, -1};
	n.create_list(5);
	n.print_list();
	return 0;
}
