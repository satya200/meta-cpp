#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/*void* operator new(size_t size)
{
	cout << "In new operator()" << endl;
	void *p;
	p = malloc(size);
	return p;
}
*/
void* operator new [] (size_t size, char setv)
{
	cout << "In new operator()" << endl;
	void *p = operator new (size);
	memset(p, setv, size);
	return p;
}

int main()
{
	//int *p = new int; // Calling Overloading operator new
	//*p = 30;
	//cout << *p << endl;
	//delete p;
	char *t = new ('#') char[10];
	cout << *t << endl;
	delete [] t;
	return 0;
}
