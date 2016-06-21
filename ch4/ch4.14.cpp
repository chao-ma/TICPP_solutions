#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#define NOT_RENTED_ID -1

struct VideoTape  {
	string name;
	int id;
	int location_row;
	int location_col;
	int rented_to_user_id;
	time_t time_rented;
	char tier;
	void init(string name, int id, int location_row, int location_col, int rented_to_user_id,
			time_t time_rented, char tier);
	bool rent(int);
	bool return_back();
	void print();
};

void VideoTape::init(string name, int id, int location_row, int location_col, int rented_to_user_id,
		time_t time_rented, char tier) {
	this->name = name;
	this->id = id;
	this->location_row = location_row;
	this->location_col = location_col;
	this->rented_to_user_id = rented_to_user_id;
	this->time_rented = time_rented;
	this->tier = tier;
}

bool VideoTape::rent(int user_id) {
	if (rented_to_user_id != NOT_RENTED_ID) {
		return false;
	}
	rented_to_user_id = user_id;
	time_rented = time(nullptr);
	return true;
}

bool VideoTape::return_back() {
	if (rented_to_user_id == NOT_RENTED_ID) {
		return false;
	}
	rented_to_user_id = NOT_RENTED_ID;
	return true;
}

void VideoTape::print() {
	string output = "Video tape: " + to_string(id) + ' ' + name + " tier: " + tier + '\n';
	if (rented_to_user_id == NOT_RENTED_ID) {
		output += "This video tape is not rented. It is located at row " +
				to_string(location_row) + " col " + to_string(location_col) + '\n';
	} else {
		output += "This video tape is rented to " +
						to_string(rented_to_user_id) + " at " + ctime(&time_rented) + '\n';
	}
	cout << output;
}

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
	VideoTape v[5] = {{"Star Wars", 1, 2, 3, NOT_RENTED_ID, 0, 'c'},
			{"Matrix", 2, 1, 3, NOT_RENTED_ID, 0, 'a'},
			{"Zootopia", 3, 0, 3, NOT_RENTED_ID, 0, 'c'},
			{"Game thrones", 4, 1, 4, NOT_RENTED_ID, 0, 'c'},
			{"Lion King", 5, 4, 0, NOT_RENTED_ID, 0, 'c'}};
	v[1].rent(1);
	v[3].rent(3);
	Stack stack;
	stack.initialize();
	for (int i = 0; i < 5; i++) {
		stack.push(&v[i]);
	}
	static_cast<VideoTape*>(stack.peek())->print();
	for (int i = 0; i < 5; i++) {
		static_cast<VideoTape*>(stack.pop())->print();
	}
	return 0;
}
