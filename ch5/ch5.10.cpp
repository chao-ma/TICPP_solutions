#include <iostream>
#include "Stash.h"
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
	cout << "This is Hen " << val << endl;
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
	Stash s;
	s.initialize(sizeof(Hen));
	for (int i = -5; i < 16; i++) {
		Hen* hen = new Hen;
		hen->val = i;
		s.add(hen);
	}
	cout << s.count() << endl;
	for (int i = 0; i < s.count(); i++)
		static_cast<Hen*>(s.fetch(i))->display();
	s.cleanup();
}
