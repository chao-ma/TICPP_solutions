#include <iostream>
using namespace std;

class Hen {
	friend int main();
private:
	int val;
public:
	class Nest {
		friend class Hen;
	private:
		int val;
	public:
		class Egg {
			friend class Hen::Nest;
		private:
			int val;
		public:
			void display(Nest& nest);
		};
		void display(Hen& hen);
	};
	void display();
};

void Hen::display() {
	cout << "This is Hen" << endl;
	val = 0;
}

void Hen::Nest::display(Hen& hen) {
	cout << "This is Nest" << endl;
	cout << "Hen: " << hen.val << endl;
	val = 1;
}

void Hen::Nest::Egg::display(Nest& nest) {
	cout << "This is Egg" << endl;
	cout << "Nest: " << nest.val << endl;
	val = 2;
}

int main() {
	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;
	hen.display();
	nest.display(hen);
	egg.display(nest);
}
