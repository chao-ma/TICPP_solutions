#include <cassert>
#include <cstdio>
// g++ -DNDEBUG ch4.12.cpp -o ch4.12

int main() {
	assert(false);
	std::printf("hello");
	return 0;
}
