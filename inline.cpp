#include <iostream>

using namespace std;

inline int ADD(int a, int b)
{
	cout << "In add" << endl;
	return (a + b);
}

int main()
{
	int res;
	res = ADD(2, 3);
	cout << res << endl;
	return 0;
}
