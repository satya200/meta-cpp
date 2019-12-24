#include <iostream>

using namespace std;

class shape {			//Abstracr Base class
public:
	virtual void draw() = 0; //Pure Virtual Function
	/*virtual void draw() = 0
	{
		cout << "shape init brush pencile" << endl;
	}*/
};

class polygon: public shape {	//Concrete class
	void draw()
	{
		//shape::draw();
		cout << "polygon draw by trangulation" << endl;
	}
};

class closedconic: public shape {
	//draw(); //Inherited pure virtual function becz derive class of shape
};

class quadrilateral: public polygon {
	void draw()
	{
		cout << "Draw quadrilateral line" << endl;
	}
};

class triangle: public polygon {
	void draw()
	{
		cout << "Draw Triangle Line" << endl;
	}
};

class circle: public closedconic {
	void draw()
	{
		cout << "Circle draw" << endl;
	}
};

class ellipse: public closedconic {
	void draw()
	{
		cout << "Draw ellipse" << endl;
	}
};


int main()
{
	shape *arr[] = {new triangle, new quadrilateral, new circle, new ellipse};
	for (int i =0; i < sizeof(arr) / sizeof(shape *); i++) {
		arr[i]->draw();
	}
	return 0;
}
