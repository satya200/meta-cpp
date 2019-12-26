#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	double d = 2.0;
	double *pd = &d;

	i = d;	//implicit cast gives WARNING
	i = static_cast<int>(d);	//static cast OK
	i = (int)d;	//C style cast OK

	d = i;	//implicit cast gives WARNING
	d = static_cast<double>(i);	//static cast OK
	d = (double)i;	//C style cast OK

	i = pd;	//implicite error
	i = static_cast<int>(pd); //implicit error becz ther is no point to assign pointer to variable
	i = (int)pd;	// C style but very RISKY

	return 0;
}
