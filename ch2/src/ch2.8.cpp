#include <iostream>
#include <vector>

using namespace std;

int main() {
	float vals[] = {3.0, 2.2, 1.3, 3.14, 2.71828,
					1.3, 2.3, 0.1, -0.2, 0,
					1,2,3,4,5,
					5,4,3,2,1,1,2,3,4,5};
	vector<float> container;
	for (int i = 0; i < 25; i++) {
		container. push_back(vals[i]);
	}
	for (int j = 0; j < container.size(); j++)
	    cout << container[j] << ',' << endl;
	return 0;
}
