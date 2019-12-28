#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T mymax(T a, T b)
{
	cout<< "In Max template function" << endl;
	return  a > b ? a : b;
}

/* If you need template specialization below is the syntax. Means the above function will not work in case of string becz in case of string we need different methode */

template<>
char *mymax<char *>(char *x, char *y)
{
	cout << "In string max" << endl;
	return strcmp(x, y) > 0 ? x : y;
}

template<class T, int size>
T mymax(T x[size])
{
	T t = x[0];
	cout << "In arr size" << endl;
	return t;	
}
int main()
{
	int a = 3;
	int b = 5;
	int imax;
	char str1[] = "xy";
	char str2[] = "tinku";
	char *str_res;
	int arr[] = {2, 3, 4, 5};
	/* In below Line <int> is replace in above T pleace */
	imax = mymax<int>(a, b);
	//imax = mymax(a, b);
	cout << "max in " << a << " and " << b << " is =" << imax << endl;
	str_res = mymax<char *>(str1, str2);
	cout << "greter string is = " << str_res << endl;
	cout << "In array = " << mymax<int, 4>(arr) << endl;
	return 0;
}
