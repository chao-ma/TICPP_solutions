#include "ch4.3.h"

/*
 * g++ -c ch4.3.cpp -o lib_ch4.3
 * g++ -c ch4.3.main.cpp -o libMain
 * g++ lib_ch4.3 libMain -o ch4.3
 */
int main() {
	Foo foo = {2};
	foo.display(3);
	return 0;
}
