#include <iostream>

using namespace std;

inline int ADD(int a, int b)
{
	//ADD(1,2); // Inline should not be recursive
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
