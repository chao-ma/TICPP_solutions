#include <iostream>
#include <type_traits>

using namespace std;

template <typename T, size_t N>
void print(T (&a)[N]) {
	for (int i = 0; i < N; i++)
		cout << a[i] << ", ";
	cout << endl;
}

int main() {
	char a[10] = {1,1,1,1,1,2,2,2,2,2};
	char b[5] = {1,2,3,4,5};
	std::cout << std::extent<decltype(a)>::value << '\n';
	std::cout << std::end(a) - std::begin(a) << endl;
	print(a);print(b);
	*(a+10) = 5;
	print(a);print(b);
	return 0;
}
