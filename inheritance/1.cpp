#include <iostream>

using namespace std;

class flower {
	int data;
public:
	int data1;
	flower()
	{
		data1 = 100;
	}
};

class rose : public flower {
	int data2;
public:
	void display()
	{
		cout << "In display" << endl;
		cout << flower::data1 << endl;
		cout << rose::data1 << endl;
	}
};

int main()
{
	flower obj;
	obj.data1 = 10;
	cout << "In main = " << obj.data1 << endl;
	rose obj1;
	obj1.display();
	cout << "In main1 " << obj1.data1 << endl;
	return 0;
}
