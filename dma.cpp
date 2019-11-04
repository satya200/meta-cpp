#include <iostream>
//#include <cstdlib>

using namespace std;

int main()
{
	int *p = new int (5);// If i wright int [5] in that case 5 * sizeof(int) will be allocate
	char *s = new char[10];
	cout << "In dma" << endl;
	cout << *p << endl;
	cin>>s;
	cout << s << endl;
	delete p;
	delete [] s;
	return 0;
}
