#include <iostream>

using namespace std;

class B {
public:
	void f()
	{
		cout << "In B::f() const" << endl;
	}
	virtual void g() //Dynamic Binding
	//void g()
	{
		cout << "B::g()" << endl;
	}
};

class D : public B {
public:
	void f()
	{
		cout << "In D::f() const" << endl;
	}
	virtual void g() //Dynamic Binding
	{
		cout << "D::g()" << endl;
	}
};

int main()
{
	B b;
	D d;

	B *pb = &b;
	B *pd = &d; //upcast

	B &rb = b;
	B &rd = d; //upcast

	pb->f(); //B::f()=>static Binding 
	pb->g(); //B::g()=>dynamic Binding
	pd->f(); //B::f()=>static Binding
	pd->g(); //D::g()=>Dynamic Binding

	rb.f(); //B::f()=>static Binding
	rb.g(); //B::g()=> Dynamic Binding
	rd.f(); //B::f()=>static Binding
	rd.g(); //D::g()=>Dynamic Binding

	b.f(); //B::f()
	b.g(); //B::g()
	d.f(); //D::f()
	d.g(); //D::g()

	return 0;
}
