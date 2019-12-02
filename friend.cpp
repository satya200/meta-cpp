#include <iostream>

using namespace std;

class Myclass {
	int data;
public:
	Myclass (int i)
	{
		cout << "In side const" << endl;
		data = i;
	}
	//friend void display(const Myclass& a);
	friend void display(Myclass& a);
};

void display(Myclass& a)
{
	cout << "In display data =" << a.data << endl;
}

int main()
{
	Myclass obj(10);
	display(obj);
	return 0;
}
