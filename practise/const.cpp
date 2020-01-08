#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 41;
	const int *p = &a;
	int *q;
	q = p;
	//int * const p = &a;
	cout << &a <<"==>"<< p << "===> "<< *p << endl;
	a = 30;
	//p = &b;
	//*p = 30;
	cout << &a <<"==>"<< p << "===> "<< *p << endl;
	//*p = 20;
	return 0;
}
