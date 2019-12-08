#include <iostream>

using namespace std;

class Engine {
public:
	Engine(int no_of_cyl)
	{
		cout << "In Engine const" << no_of_cyl << endl;
	}
	void start()
	{
		cout << "Engine starts" << endl;
	}
};

class Car {
public:
	Car() : e(8)
	{
	}
	void start()
	{
		cout << "Car start" << endl;
		e.start();
	}
private:
	Engine e;
};

int main()
{
	Car c;
	c.start();
	return 0;
}
