#include <stdio.h>

#define SWAP(a,b) int tmp = a;a=b;b=tmp;

int main()
{
	int a = 10, b = 20;
	SWAP(a,b);
	printf("After swap = a = %d:b = %d\n",a,b);
	return 0;
}
