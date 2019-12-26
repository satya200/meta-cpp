#include <iostream>

using namespace std;

class A {
public:
	virtual ~A()
	{
		cout << "A dest" << endl;
	}
};

class B : public A {
};

class C {
public:
	virtual ~C()
	{
		cout << "C dest" << endl;
	}
};

int main()
{
	A a; B b; C c;
	A *pa; B *pb; C *pc;
	void *pv;

	pb = &b;
	pa = dynamic_cast<A*>(pb);
	cout << pb << "cast to pa" << pa << "upcast valid" << endl;

	pa = &b;
	pb = dynamic_cast<B*>(pa);
	cout << pa << "cast to pb" << pb << "Downcast valid" << endl;

	pa = &a;
	pb = dynamic_cast<B*>(pa);
	if (pb == NULL) {
		cout << "In valid downcast return NULL" << endl;
	}
	cout << pa << "cast to pb" << pb << "Downcast In-valid" << endl;

	pa = (A*)&c;
	pc = dynamic_cast<C*>(pa);
	if (pc == NULL) {
		cout << "Unreletd class NULL" << endl;
	}
	cout << pa << "cast to pc " << pc << "Un releted vast invalid" << endl;

	pa = dynamic_cast<A*>(pv); // error void * invalid expression. dynamic_cast source is always polymerfic
	return 0;
}
