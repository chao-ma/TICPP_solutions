struct Dummy {
private:
	int privateI;
	void privateFunc(){};
protected:
	int protectedI;
	void protectedFunc(){};
public:
	int publicI;
	void publicFunc(){};
};

int main() {
	Dummy dummy;
	dummy.publicI;
	dummy.publicFunc();
	dummy.protectedI;
	dummy.protectedFunc();
	dummy.privateI();
	dummy.privateFunc();
	return 0;
}
