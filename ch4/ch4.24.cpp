#include <iostream>
using namespace std;

struct Node {
	Node* next;
	int value;
};

Node* create_list(int count) {
	Node* head = nullptr;
	Node* tail = nullptr;
	for (int i = 0; i < count; i++) {
		if (head == nullptr) {
			head = tail = new Node;
		} else {
			tail->next = new Node;
			tail = tail->next;
		}
		tail->next = nullptr;
		tail->value = i;
	}
	return head;
}

void print_list(Node* node) {
	while (node != nullptr) {
		cout << node->value << endl;
		node = node->next;
	}
}

int main() {
	Node* head = create_list(3);
	print_list(head);
	return 0;
}
