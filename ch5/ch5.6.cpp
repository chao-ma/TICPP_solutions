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
			void display();
		};
		void display();
	};
	void display();
};

void Hen::display() {
	cout << "This is Hen" << endl;
	val = 0;
}

void Hen::Nest::display() {
	cout << "This is Nest" << endl;
	val = 1;
}

void Hen::Nest::Egg::display() {
	cout << "This is Egg" << endl;
	val = 2;
}

int main() {
	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;
	hen.display();
	nest.display();
	egg.display();
}
