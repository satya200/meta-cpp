#include <iostream>

using namespace std;
/*
* Better to use ref in argument why becz it won't do
* enatare copy it is just alias of formal
* Parameter. But Here one prob is der i.e
* foo function capable to change actual value.

int foo(int &p)
*/

/*
* To Avoid above probleam we need to use below
* const reference.

int foo(const int &p)
{
	cout << "In foo()=" << p << endl;
	//p++;
	return (p + 1);
}
*/

//int ret_ref(int& a)
int& ret_ref(int& a)
{
	cout << "In foo() a=" << a << " , &a=" << &a << endl;
	return (a);
}

int foo(int& a)
{
	cout << "In foo()=" << a << endl;
}
int main()
{
	int a = 10, ret;
	int b = 15;
	cout << "a = " << a << endl;
	//ret = foo(a);
	cout << "a = " << a << "\nret = " << ret << endl;

	/* Return by value and return by reference */
	/* If we use below statement and function defination doesn't have
	* reference return type, in this case we got error. why becz function call
	* is a expressipn, so expression ll store in temporary memory.
	*/
	//int& re = ret_ref(b);
	/* To avoide above error we have to use const reference 
	* But if function return type is reference in that case const is opetional.*/
	//const int& re = ret_ref(b);
	//int& re = ret_ref(b);
	//cout << "ret = " << re << " &ret = " << &re <<" b = " << b << " &b = " << &b << endl;
	foo(1); // Error becz foo() argument is not const
	return 0;
}
