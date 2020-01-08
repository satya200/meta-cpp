#include <stdio.h>

int main()
{
	int a = 10;
	int b = 41;
	const int *p = &a;
	int *q;
	q = p;
	//int * const p = &a;
	printf("%u, %u ,%d\n",&a, p, *p);
	//a = 30;
	//p = &b;
	//*p = 30;
	*q = 100;
	printf("%u, %u ,%d\n",&a, p, *p);
	//*p = 20;
	return 0;
}
