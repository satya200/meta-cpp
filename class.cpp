#include <iostream>

using namespace std;

class add {
public: 
	int a;
	int b;
	int get_data()
	{
		cout << "In class add get_data()" << endl;
		return (a + 1);
	}
};

void print(const add& t)
{
	cout << "In print()" << t.a << endl;
}

int main()
{
	int ret;
	add ob = {1,3};
	print(ob);
	ret = ob.get_data();
	cout << "In main()" << ret << endl;
	return 0;
}
