#include <iostream>

using namespace std;

class Point {
	int x_;
	int y_;
public:
	Point (int x, int y): x_(x), y_(y) 
	{
		cout << "Point ctor" << endl;
		print();
		cout << "Point ctor complete" << endl;
	}
	~Point() 
	{
		cout << "Point dtor" << endl;
		print();
		cout << "Point dtor complete" << endl;
	}
	void print()
	{
		cout << "x_ = " << x_ << "y_ = " << y_ << endl;
	}
};

class Rect {
	Point tl_;
	Point br_;
public:
	Rect(int tlx, int tly, int brx, int bry):tl_(tlx, tly), br_(brx, bry)
	{
		cout << "Rect ctor" << endl;
		print();
		cout << "Rect ctor complete" << endl;
	}
	~Rect()
	{
		cout << "Rect dtor" << endl;
		print();
		cout << "Rect dtor complete" << endl;
	}
	void print()
	{
		tl_.print();
		cout << endl;
		br_.print();
		cout << endl;
	}
};

int main()
{
	cout << "In main start" << endl;
	Rect r (1, 2, 3, 4);
	cout << "In main" << endl;
	r.print();
	cout << "In main end" << endl;
	return 0;
}
