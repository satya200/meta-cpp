#include <iostream>
#include <cmath>

using namespace std;

class Cmplx {
public:
	double re_;
	double im_;
	Cmplx(double re, double im) : re_(re), im_(im)
	{
		cout << "ctor para:" ;
		print();
	}
	Cmplx(const Cmplx& c) : re_(c.re_), im_(c.im_)
	{
		cout << "ctor copy:" ;
		print();
	}
	~Cmplx()
	{
		cout << "dtor:" << endl;
		print();
	}
	double norm()
	{
		return (sqrt(re_*re_ + im_*im_));
	}
	void print()
	{
		cout << "print" << endl;
	}
};

void display(Cmplx c_par)
{
	cout << "display :";
	c_par.print();
}

int main()
{
	Cmplx c(4.2, 5.3); // parameterize constructure
	cout << "In main going to call copy:" << endl;
	display(c); //Copy constructure called to copy c into c_par
	cout << "copy completed" << endl;
	return 0;
}
