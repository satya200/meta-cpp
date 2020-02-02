#include <iostream>

using namespace std;

class Myclass {
	int data;
public:
	Myclass(int d) : data(d)
	{
		cout<< "In constru data = " << data << ":"<< d << endl;
	}
	/* Pre incremnt operator overloading */
	Myclass& operator++()
	{
		data = data * 2;
		return *this;// Here this has to be return this pointer
	}
	/* Post incremnt operator overloading */
	Myclass operator++(int)
	{
		Myclass t(data);// Here data has to be assign to temp varibale.
		data = data / 3;
		return t;
	}
	void disp()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	Myclass obj(10);
	obj.disp();
	//Myclass obj1(1);// = obj++;
	Myclass obj1(1) = obj++;
	obj++;
	cout << "After post increment" << endl;
	obj1.disp();
	obj.disp();
	obj1 = ++obj;
	cout << "After pre increment" << endl;
	obj1.disp();
	obj.disp();
	return 0;
}
