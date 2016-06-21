#include <iostream>
#include <string>
using namespace std;

struct Lib {
	string a;
	string b;
	string c;
	// string s[3];
	// Of course replacing a,b,c with string s[3] will break the code.
};

struct LibC {
private:
	//string a;
	//string b;
	//string c;
	string s[3];
public:
	string get_a();
	string get_b();
	string get_c();
	void set_a(string& val);
	void set_b(string& val);
	void set_c(string& val);
};

void LibC::set_a(string& val) {
	s[0] = val;
}

void LibC::set_b(string& val) {
	s[1] = val;
}

void LibC::set_c(string& val) {
	s[2] = val;
}

int main() {
	Lib x;
	x.a = "this is a";
	x.b = "this is b";
	x.c = "this is c";
	LibC y;
	string a = "this is a";
	y.set_a(a);
	string b = "this is b";
	y.set_b(b);
	string c = "this is c";
	y.set_c(c);
	return 0;
}
