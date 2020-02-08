#include <iostream>
#include <cstdlib>

using namespace std;

class Obj {
	int data;
public:
	void init()
	{
		cout << "In init" << endl;
	}
};

int main()
{
	Obj* obj = (Obj*)malloc(sizeof(Obj)); // Typecast is compolsery and it won't called consructer as well
	if (obj == NULL) {
		cout << "malloc failed" << endl;
	}
	cout << "size = " << sizeof(Obj) << endl;
	obj->init();
	return 0;
}
