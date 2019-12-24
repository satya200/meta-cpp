#include <iostream>

using namespace std;

class shape {
public:
	virtual void draw() = 0; //Pure Virtual Function
};

class polygon: public shape {
	void draw()
	{
		cout << "polygon draw by trangulation" << endl;
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
