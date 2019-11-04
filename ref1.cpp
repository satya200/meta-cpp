#include <iostream>

using namespace std;

int& foo(int& a)
{
	int t = a;
	t++;
	return (a);
	//return (t);// NEVER EVER RETURN LOCAL VARIABLE REFERENCE
}

int main()
{
	int a = 10;
	cout << "a = " << a <<" &a = " << &a << endl;
	const int& ret = foo(a);
	cout << "a = " << a <<" &a = " << &a << "\nret = "<< ret << " &ret = " << &ret <<endl;
	return 0;
}
