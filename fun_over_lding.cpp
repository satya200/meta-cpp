#include <iostream>

using namespace std;

int foo()
{
	cout << "In foo()" << endl;
	return 0;
}

int foo(int = 0)
{
	cout << "In foo1()" << endl;
	return 0;
}

int foo(int x, int y)
{
	cout << "In foo2()" << endl;
	return 0;
}

int main()
{
	int x = 5, y = 6;
	//foo(); // This call is Error.
	foo(x);
	foo(x, y);
	return 0;
}
