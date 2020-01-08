#include <iostream>

using namespace std;

const int buffsize = 10;
//const int buffsize; // This is error
int main()
{
	int a[buffsize];
	const int i = buffsize + 10;
	//i = i + 10;
	cout << i << endl;
	return 0;
}
