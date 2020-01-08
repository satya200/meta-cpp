#include <iostream>

using namespace std;

class A {
public:
	const int *a;
	const int b = 10;
	int c;
	A(int v)
	{
		//b = v;
	}
	void change(int val);
};

void A::change(int val)
{
	a = &val;
	cout << a << "val = " << *a << endl;
	//*a = 20;
}

int main()
{
	//int z = 10;
	//const int b;
	//b = z;
	
	const A obj(1);
	//obj.change(10);
	return 0;
}
