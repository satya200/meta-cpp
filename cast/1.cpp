#include <iostream>

using namespace std;

class A {
	int i;
public:
	A(int j) : i(j)
	{
	}
	int get() const
	{
		cout << "In get i = " << i<<endl;
		return i;
	}
	void set(int j)
	{
		cout << "In set" << endl;
		i = j;
		cout << "In set i = " << j<< endl;
	}
};

void print(char *str)
{
	cout << "In ptr str = " << str << endl;
}

int main()
{
	const char *c = "Satya";
	//print(c); // Error 
	print(const_cast<char *>(c));

	const A a(1);// A is a const object
	a.get();
	//a.set(5);// Error becz we can not call non const member function from const object
	const_cast<A&>(a).set(5);
	//const_cast<A>(a).set(5); This is error becz we can not creat new object which is already const
	a.get();
	return 0;
}
