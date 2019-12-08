/* Please compare 5.cpp. This example is used for private inheritance */
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

class Car : private Engine {
public:
	Car() : Engine(8)
	{
	}
	/*void start()
	{
		cout << "Car start" << endl;
	}*/
	using Engine::start;
};

int main()
{
	Car c;
	c.start();
	return 0;
}
