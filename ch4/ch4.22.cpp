#include <iostream>
#include <string>
#include <fstream>

#define INIT_SIZE 10

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

struct Stash {
  int size;      // Size of each space
  int quantity;  // Number of storage spaces
  int next;      // Next empty space
   // Dynamically allocated array of bytes:
  unsigned char* storage;
  // Functions!
  void initialize(int size);
  void cleanup();
  int add(const void* element);
  void* fetch(int index);
  int count();
  void inflate(int increase);
};

void Stash::initialize(int size) {
	this->size = size;
	next = 0;
	quantity = INIT_SIZE;
	storage = new unsigned char[size * quantity];
}

void Stash::cleanup() {
	if (size > 0) {
		size = 0;
		next = 0;
		quantity = 0;
		delete[] storage;
	}
}

void* Stash::fetch(int index) {
	if (index < quantity) {
		return static_cast<void*>(&(storage[index*size]));
	}
	return 0;
}

int Stash::count() {
	return next;
}

int Stash::add(const void* element) {
	if (next >= quantity) {
		inflate(INIT_SIZE);
	}
	const unsigned char* e = static_cast<const unsigned char*>(element);
	for (int i = 0; i < size; i++) {
		storage[size*next + i] = e[i];
	}
	return next++;
}

void Stash::inflate(int increase) {
	if (increase <= 0)
		return;
	cout << increase << endl;
	unsigned char* new_storage = new unsigned char[(quantity + increase) * size];
	cout << "after new storage" << endl;
	for (int i = 0; i < size * quantity; i++) {
		new_storage[i] = storage[i];
	}
	quantity += increase;
	delete[] storage;
	storage = new_storage;
}

void print_stash(Stack& stack) {
	if (stack.peek() != 0) {
		Stash* stash = static_cast<Stash*>(stack.pop());
		print_stash(stack);
		for (int i = 0; i < stash->count(); i++) {
			cout << *reinterpret_cast<char**>(stash->fetch(i)) << endl;
		}
	}
}

int main() {
	ifstream input_file("ch4.22.cpp");
	string buff;
	if (input_file.is_open()) {
		Stash* p_stash = new Stash;
		p_stash->initialize(sizeof(char**));
		Stack stack;
		while(getline(input_file, buff)) {
			char* char_addr = new char[buff.size() + 1];
			for (int i = 0; i < buff.size(); i++)
				char_addr[i] = buff[i];
			char_addr[buff.size()] = 0;
			p_stash->add(&char_addr);
			if (p_stash->count() == 5) {
				stack.push(p_stash);
				p_stash = new Stash;
				p_stash->initialize(sizeof(char*));
			}
		}
		if (p_stash->count() > 0)
			stack.push(p_stash);
		print_stash(stack);
	} else {
		cout << "unable to open file." << endl;
		return 1;
	}
	return 0;
}
