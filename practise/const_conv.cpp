/* This below example is for Constructer Conversion */
#include <iostream>

using namespace std;

class One {
public:
	One()
	{
		cout << "Int One const" << endl;
	}
};

class Two {
public:
	//explicit Two(const One&) // To Avoid Constructer Conversion use explicit
	Two(const One&) // Constructer Conversion
	//Two(const Two&) // For testing giving compile time error
	{
		cout << "In Two Const" << endl;
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
