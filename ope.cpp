#include <iostream>

using namespace std;

enum D {
	DATA = 10,
	DATA1
};

int operator+(enum D x, enum D y)
{
	cout << "In substraction" << endl;
	return (x + y);
}

class Int {
	int i;
public:
	Int(int data) : i(data) {
		cout << "In const" << data << endl;
	}
	const Int operator+(const Int& val) {
		cout << "In operator +" << endl;
		return (i + val.i);
	}
	void print()
	{
		cout << "In print" << i << endl;
	}
};

int main()
{
	int x = 10;
	int y = 5;
	//int res = x-y; // Operator overloading will work only for usedefine data type like class
	int res = DATA1 + DATA;
	/*Int obj(10);
	Int obj1(20);
	Int obj2 = obj + obj1;
	 obj2.print();*/
	return 0;
}
