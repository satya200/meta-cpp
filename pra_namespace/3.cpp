#include <iostream>

using namespace std;

namespace Myname {
	int data1;
}

namespace Myname {
	int data2;
}

int main()
{
	using namespace Myname;
	data1 = data2 = 100;
	cout << data1 << "===>" << data2 << endl;
	return 0;
}
