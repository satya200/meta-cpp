#include <stdio.h>

/* Function pointer */
typedef int (*cal) (int, int);

int add(int a, int b)
{
	printf("In side add\n");
	return (a + b);
}

int mul(int a, int b)
{
	printf("In side mul\n");
	return (a * b);
}

int sub(int a, int b)
{
	printf("In side sub\n");
	return (a - b);
}

int main()
{
	int res;
	/* Array of function pointers */
	cal cal_arr[] = {add, mul, sub};
	/* Calling add function */
	res = cal_arr[0](5, 4);
	printf("add res = %d\n",res);

	res = cal_arr[2](5, 4);
	printf("add sub = %d\n",res);

	res = cal_arr[1](5, 4);
	printf("add mul = %d\n",res);
	return 0;
}
