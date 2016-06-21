#include <iostream>
#include <vector>
using namespace std;

#define INIT_SIZE 10

// Stash declaration copied from TICPP, implementation from myself

struct Stash {
  int size;      // Size of each space
  int quantity;  // Number of storage spaces
  int next;      // Next empty space
   // Dynamically allocated array of bytes:
  vector<char> storage;
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
}

void Stash::cleanup() {
	storage.clear();
}

void* Stash::fetch(int index) {
	if (index < storage.size() / size) {
		return static_cast<void*>(&(storage[index*size]));
	}
	return 0;
}

int Stash::count() {
	return storage.size() / size;
}

int Stash::add(const void* element) {
	const unsigned char* e = static_cast<const unsigned char*>(element);
	for (int i = 0; i < size; i++) {
		storage.push_back(e[i]);
	}
	return count();
}

void Stash::inflate(int increase) {

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
