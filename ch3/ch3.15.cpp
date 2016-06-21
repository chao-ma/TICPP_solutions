#include <iostream>
using namespace std;

typedef struct {
	string first_name;
	string last_name;
	int age;
} Person;

int main(int argc, char* argv[]) {
	Person p;
	p.first_name = "Chao";
	p.last_name = "Ma";
	p.age = 31;
	cout << "First name: " << p.first_name << " Last name: " << p.last_name << " Age: " << p.age << endl;
	Person* p_ptr = &p;
	p_ptr->first_name = "Rachel";
	p_ptr->last_name = "Gao";
	p_ptr->age = 29;
	cout << "First name: " << p_ptr->first_name << " Last name: " << p_ptr->last_name << " Age: " << p_ptr->age << endl;
	return 0;
}
