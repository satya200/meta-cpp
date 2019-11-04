#include <iostream>

using namespace std;

/* Default parameter is use if we are not passing any value at the
* time of function call */
//int foo(int a = 5)
int foo(int a = 2+5)
{
	return (a);
}

int main()
{
	int a = 0, ret;
	cout << "a = " << a << " &a = " << &a << endl;
	ret = foo(a);
	cout << "a = " << a << " &a = " << &a << "\nret = "<< ret <<endl;
	ret = foo();
	cout << "a = " << a << " &a = " << &a << "\nret = "<< ret <<endl;
	return 0;
}
