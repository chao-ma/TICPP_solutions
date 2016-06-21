#include <iostream>
using namespace std;

enum Color {
	red,
	blue,
	orange,
	black,
	white,
	green,
};

int main() {
	Color color;
	for (color = red; color <= green; color = Color(color + 1))
		cout << color << endl;
	return 0;
}
