#include <iostream>

using namespace std;


class satya_const {
public:
	static int cnt;
	satya_const()
	{
		cnt++;
		cout << "const = " << cnt << endl;
	}
	satya_const(satya_const& obj)
	{
		cnt++;
		cout << "In copy const = " << cnt <<endl;
	}
	satya_const foo(satya_const ob) //call by value
	{
		cout << "In side foo()" << endl;
	}
	~satya_const()
	{
		cnt--;
		cout << "In Dest" << cnt << endl;
	}
};

satya_const foo1(satya_const ob)
{
	cout << "In side foo1()" << endl;
}

int satya_const::cnt = 0;
int main()
{
	satya_const obj;
	satya_const obj1;
	satya_const obj2 = obj1.foo(obj1);
	return 0;

}
