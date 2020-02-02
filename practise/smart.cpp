#include <iostream>
#include <vector>

using namespace std;

class Obj {
	static int i, j;
public:
	void f () const
	{
		cout << "i = " << i++ << endl;
	}
	void g () const
	{
		cout << "j = " << j++ << endl;
	}
};

int Obj::i = 10;
int Obj::j = 20;

class ObjCont {
	vector<Obj*> a;
public:
	void add(Obj *obj)
	{
		a.push_back(obj);
	}
friend class SmartPtr;
};

class SmartPtr {
	ObjCont& oc;
	int index;
public:
	SmartPtr(ObjCont& objc) : oc(objc) {
		cout << "In Smart pointer copy Const" << endl;
		index = 0;
	}
	bool operator++(int)
	{
		if (index >= oc.a.size() || (oc.a[++index] == 0)) {
			cout << "In false" << endl;
			return false;
		}
		return true;
	}
	Obj* operator->() const
	{
		if (oc.a[index] != 0) {
			cout << "In side ->" << endl;
			return oc.a[index];
		}
	}
};


int main()
{
	const int sz = 5;
	Obj o[sz];
	ObjCont oc;
	for (int i = 0; i < sz; i++) {
		oc.add(&o[i]);
	}
	SmartPtr sp(oc);
	do {
		sp->f();
		sp->g();
	} while(sp++);
	cout << "DON" << endl;
	return 0;
}
