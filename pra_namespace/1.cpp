#include <iostream>

using namespace std;

namespace Myname {
	int data;
	void foo()
	{
		cout << "In side foo" << endl;
	}
	class Myclass {
		int data;
	public:
		Myclass(int d) : data(d)
		{
		}
		void display()
		{
			cout << "In side display()" << endl;
		}
	};
}

int main()
{
	Myname::data = 10;
	cout << "Myname data = "<< Myname::data << endl;
	Myname::foo();
	Myname::Myclass obj(10);
	obj.display();
	return 0;
}
