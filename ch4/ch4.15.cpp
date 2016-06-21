#include <iostream>
using namespace std;

#define PRINT(type) cout<< "size of " << #type << " is " << sizeof(type) << endl;

int main() {
	PRINT(int);
	PRINT(char);
	PRINT(double);
	PRINT(short);
	PRINT(long);
	PRINT(long int);
	PRINT(char);
	PRINT(float);
	PRINT(unsigned int);
	PRINT(void*);
	PRINT(int*);
	PRINT(double*);
	return 0;
}
