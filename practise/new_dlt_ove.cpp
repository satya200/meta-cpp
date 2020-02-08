/*This program is global operator overloading of new and delete*/
//#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

/*void* operator new(size_t size)
{
	printf("Inside new global operaor overload\n");
	//cout <<"Inside new global operaor overload" << endl;
	void *tmp = malloc(size);
	if (tmp == NULL) {
		printf("Inside global malloc return NULL\n");
	} else {
		printf("Inside global malloc success:%u\n",tmp);
		return tmp;
		//return NULL;//If we return NULL or malloc fail constructure complete ll not happen
	}
}

void operator delete(void *tmp)
{
	printf("Inside global operator oveload delete\n");
	if (tmp) {
		free(tmp);
	} else {
		printf("free in not happen becz pointer is NULL");
	}
}
*/
class S {
public:
	int arr[100];
	S()
	{
		printf("In side Constructer\n");
	}
	/*This is new and delete oveload using array of memory as only for class. When we use this need to be comment above mention gloabl operator overloading.*/
	//TODO: Need to use exception handelling if memory allocation failed
	void* operator new[] (size_t size)
	{
		printf("Inside class new\n");
		return ::new char[10];
	}
	void operator delete[] (void *tmp)
	{
		printf("Inside class operator oveload delete\n");
		::delete []tmp;
	}
	~S()
	{
		printf("In side destroctor\n");
	}
};

int main()
{
	//int *ptr = new int(40);
	//delete(ptr);
	//S *obj = new S;
	//delete(obj);
	S *obj1 = new S[3];// Here constructer and destrocter ll call 3 times. But new and delete ll call 1 time
	delete []obj1;
	return 0;
}
