#include <iostream>

using namespace std;

int data1 = 200;

namespace Myname {
	int data1;
	void disp()
	{
		cout << "In Myname disp()" << endl;
	}
	namespace Myname1 {
		int data2;
		void disp()
		{
			cout << "In Myname disp1()" << endl;
		}
	}
}

using namespace Myname::Myname1;
int main()
{
	Myname::data1 = 10;
	//Myname::Myname1::data2 = 100;
	data2 = 100;
	cout << "Global data1 = " << data1 << endl;
	cout << "data1 = " << Myname::data1 << endl << "data2 = " << Myname::Myname1::data2 << endl;
	Myname::disp();
	Myname::Myname1::disp();
	return 0;
}
