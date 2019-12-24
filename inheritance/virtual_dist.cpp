#include <iostream>

using namespace std;

class B {
	int data;
public:
	B(int d) : data(d)
	{
		cout << "Const B" << "d = "<< d << "data = " << data << endl;
	}
	virtual ~B()
	{
		cout << "Dest B" << endl;
	}
	//void print()
	virtual void print()
	{
		cout << "In B print data = " << data << endl;
	}
};

class D : public B {
	int *ptr;
public:
	D(int d1, int d2) : B(d1), ptr(new int(d2))
	{
		cout << "In Const D" << endl;
	}
	~D()
	{
		cout << "In Dest D" << endl;
		delete(ptr);
	}
	void print() 
	{
		B::print();
		cout << "In D print" << *ptr << endl;
	}
};

int main()
{
	B *p = new B(2);
	cout << "Const B *p done" << endl;
	B *q = new D(3,5);

	cout << "p->print start" << endl;
	/* If print is static both the invocation is static type means which type of pointer
	   If print is virtual invocation is dynamic means pointer to point to the object
	*/
	p->print();
	cout << "p->print end" << endl;
	cout << "q->print start" << endl;
	q->print();
	cout << "q->print end" << endl;

	cout << "Going to del P" << endl;
	delete p;
	cout << "Going to del Q" << endl;
	delete q;

	return 0;
}
