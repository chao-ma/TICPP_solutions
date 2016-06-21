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

int main() {
	VideoTape v = {"Star Wars", 1, 2, 3, NOT_RENTED_ID, 0, 'c'};
	v.print();
	v.rent(0);
	v.print();
	return 0;
}
