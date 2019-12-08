#include <iostream>

using namespace std;

class B {
public:
	B()
	{
		cout << "In B class const" << endl;
	}
	~B()
	{
		cout << "In B class Destr" << endl;
	}
};

class C {
public:
	C()
	{
		cout << "In C class const" << endl;
	}
	~C()
	{
		cout << "In C class Destr" << endl;
	}
};

class D : public B {
	C obj;
public:
	D()
	{
		cout << "In D class const" << endl;
	}
	~D()
	{
		cout << "In D class Destr" << endl;
	}
};

int main()
{
	D d;
	return 0;
}
