#include <iostream>

using namespace std;

class X {
public:
	int a;
	X(int b);
};

X::X(int b)
{
	cout << "In const" << endl;
	a = b;
	cout << b << "a = " << a << endl;
}

X f5()
{
	cout << "In f5" << endl;
	return X(4);
}

const X f6()
{
	cout << "In f6" << endl;
	return X(5);
}

void f7(const X& x)
//void f7(X x)
{
	cout << "I am in f7" << endl;
}

int main()
{
	//f5() = X(1);
	f6() = X(1);
	f7(f5());
	return 0;
}
