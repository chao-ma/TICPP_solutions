#include <iostream>
using namespace std;

#define INIT_SIZE 10

// Stash declaration copied from TICPP, implementation from myself

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

int main() {
	Stash s;
	s.initialize(sizeof(double));
	for (int i = -5; i < 16; i++) {
		double d = i+ 0.25;
		s.add(&d);
	}
	cout << s.count() << endl;
	for (int i = 0; i < s.count(); i++)
		cout << *static_cast<double*>(s.fetch(i)) << endl;
	s.cleanup();
}
