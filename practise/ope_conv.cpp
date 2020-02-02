/* This below example is for Operator Conversion */
#include <iostream>

using namespace std;

class Two {
public:
	Two()
	{
		cout << "In Two Const" << endl;
	}
};

class One {
public:
	One()
	{
		cout << "Int One const" << endl;
	}
	/* This is use for operator Conversion */
	operator Two() const {
		cout << "In One for operator Conversion" << endl;
		return Two();
	}
};

void foo(const Two&)
{
	cout << "In foo()" << endl;
}

int main()
{
	One one;
	foo(one); // Wants From One to Two
	return 0;
}
