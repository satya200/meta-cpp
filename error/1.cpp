#include <iostream>
#include <exception>

using namespace std;

class myexception : public exception {
};

class myclass {
};

void h()
{
	myclass a;
	//throw 1;
	//throw 1.5;
	throw myexception();
	//throw exception();
	//throw myclass();
}

void g()
{
	myclass a;
	try {
		h();
	}
	catch(int)
	{
		cout << "int" << endl;
	}
	catch(double)
	{
		cout << "double" << endl;
	}
	catch(...) // This will jump caller stack if you use throw. With out this also bydefault compiler throw to caller stack.
	{
		cout << "In g dflt exception" << endl;
		throw;
	}
}

void f()
{
	myclass a;
	try {
		g();
	}
	catch(myexception)
	{
		cout << "In myexception" << endl;
	}
	catch(exception)
	{
		cout << "In exception" << endl;
	}
	catch(...)
	{
		throw;
	}
}

int main()
{
	try {
		f();
	}
	catch(...)
	{
		cout << "In unknown" << endl;
	}
	return 0;
}
