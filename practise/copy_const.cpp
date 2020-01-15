#include <iostream>

using namespace std;

int objcnt = 0;

class X {
public:
	int data;
	X()
	{
		objcnt++;
		cout << "In dflt const" << objcnt << endl;
	}
	X(int val)
	{
		objcnt++;
		data = val;
		cout << "In side parameter const" << objcnt << ";data = "<< data << endl;
	}
	X(const X& obj)
	{
		objcnt++;
		data = 100;
		cout << "this = " << this << endl;
		cout << "In side copy const = " << objcnt << endl;
	}
	~X()
	{
		objcnt--;
		cout << "In Dest" << objcnt << endl;
	}
};

X foo(X obj)
{
	cout << "In side foo()" << endl;
	return obj;
}

int main()
{
	//X *obj; // In case pointer no such constr will call
	X obj1(3);
	X obj2(obj1);// Copy Cinst required. For test please comment copy const and check o/p
	//X obj2 = foo(obj1);// Copy Cinst required. For test please comment copy const and check o/p
	//foo(obj1);
	cout << "obj1 address = " << &obj1 << endl;
	cout << "obj2 address = " << &obj2 << endl;
	cout << "obj1.data = " << obj1.data << "obj2.data = "<< obj2.data << endl;
	//cout << "obj1.data = " << obj1.data << endl;
	return 0;
}
