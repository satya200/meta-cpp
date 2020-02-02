#include <iostream>

using namespace std;

struct data {
	int x;
	int y;
};

/* Order of operand can't be change */
int operator+(struct data d, struct data a)
{
	cout << "In + operator" << endl;
	//return (x + y);
	return 0;
}

int main()
{
	struct data x = {10, 20};
	struct data y = {10, 20};
	//int x = 10, y = 20;
	int ret;
	ret = x + y;
	cout << ret << endl;
	return 0;
}
