#include <iostream>
#define DEBUG
// g++ -D DEBUG ch4.11 -o ch4.11
// g++ -U DEBUG ch4.11.cpp -o ch4.11


int main() {
#ifdef DEBUG
	std::cout << "This is debug" << std::endl;
#else
	std::cout << "This is release" << std::endl;
#endif //DEBUG
	return 0;
}
