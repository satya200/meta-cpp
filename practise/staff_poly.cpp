/* This code is implemented as polymerphic way. But here if company add some more
 division will so we need to add more code. So this below logic is not generic.*/

#include <iostream>
#include <string>

using namespace std;

//typedef enum E_TYPE{Er, Mr, Dr}E_TYPE;

class Enginner {
public:
	string name;
	//E_TYPE type;
	//Enginner(const string &name, E_TYPE e = Er) : name(name), type(e) 
	Enginner(const string &name) : name(name)
	{
		cout << "Enginner Const called" << endl;
	}
	/*E_TYPE get_type()
	{
		cout << "return type:" << type << endl;
		return type;
	}*/
	virtual void ps()
	{
		cout << "Process Salary For Enginner" << endl;
	}
};

class Manager : public Enginner {
public:
	Enginner *reports[10];
	//string name; // These 2 varible not required becz it will inherit from base class
	//E_TYPE type;
	//Manager(const string &name, E_TYPE e = Mr) : Enginner(name, e)
	Manager(const string &name) : Enginner(name)
	{
		cout << "Manager Const called" << endl;
	}
	void ps()
	{
		cout << "Process Salary For Manager" << endl;
	}
};

class Director : public Manager {
public:
	Manager *reports[10];
	//string name;
	//E_TYPE type;
	Director(const string &name) : Manager(name)
	{
		cout << "Director Const called" << endl;
	}
	void ps()
	{
		cout << "Process Salary For Director" << endl;
	}
};

int main()
{
	Enginner e1("Satya");
	Enginner e2("Sundar");
	Manager m1("babu");
	Manager m2("Rahul");
	Director d1("Arun");
	Director d2("Sachin");

	//E_TYPE type;
	Enginner *staff[] = {&e1, &e2, &m1, &m2, &d1, &d2};

	for (int i = 0; i < sizeof(staff)/sizeof(Enginner *); i++) {
			staff[i]->ps();
	}
	return 0;
}
