#include <iostream>
#include <cstring>

using namespace std;

class flower {
public:
	int data;
	int add(int a, int b)	// Example of overriding
	{
		cout << "Add = " << a+b << endl;
		return (a + b);
	}
};

class rose : public flower {
public:
	int data1;
	/*int add(int a, int b)	// Example of Overriding
	{
		cout << "Sub = " << a-b << endl;
		return (a - b);
	}*/
	int add(const string& str)
	{
		cout << "In overloading = " << str  << endl;
	}
};

int main()
{
	flower obj;
	obj.add(2, 3);
	rose obj1;
	//obj1.add(5, 4);	//Overriding
	obj1.add("Satya");	//Over Loading
	return 0;
}
