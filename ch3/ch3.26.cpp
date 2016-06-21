#include <iostream>
using namespace std;

template<typename T, size_t N>
int array_size(T (&)[N]) {
	return N;
}

void SetValue(void* p, size_t N, unsigned char val) {
	unsigned char* p_c = static_cast<unsigned char*>(p);
	for (int i = 0; i < N; i++)
		p_c[i] = val;
}

int main() {
	int arr[] = {1,2,3,4,5};
	void* p = static_cast<void*>(arr);
	SetValue(p, array_size(arr)*sizeof(int), 1);
	for (int i = 0; i < array_size(arr); i++)
		cout << arr[i] << endl;
}
