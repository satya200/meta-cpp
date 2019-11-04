#include <iostream>

using namespace std;

#define MAX_SIZE 5

class my_stack {
	int top;
	int *stack_data;
public:
	/*void init()
	{
		cout << "In top_init()" << endl;
		top = -1;
		stack_data = new int[MAX_SIZE];
	}*/
	my_stack();
	~my_stack();
	/*void exit()
	{
		cout << "In exit()" << endl;
		top = 0;
		delete [] stack_data;
	}*/
	int is_empty()
	{
		if (top == -1) {
			cout << "In is_empty(): Satck is empty" << endl;
			return 1;
		}
		return 0;
	}
	int is_full()
	{
		if (top == MAX_SIZE) {
			cout << "In is_full(): Satck is full" << endl;
			return 1;
		}
		return 0;
	}
	int push(const int& data)
	{
		cout << "In push():" << endl;
		stack_data[++top] = data;
	}
	int pop()
	{
		cout << "In pop()" << endl;
		return (stack_data[top--]);
	}
};

/* Below is special type of intialization
* Only possible in constructure
*/
my_stack :: my_stack() : top (-1)    //This is called initialization list
//my_stack::my_stack()
{
	//top = -1;
	stack_data = new int[MAX_SIZE];
	cout << "In Default constructure" << endl;
}

my_stack :: ~my_stack()
{
	cout << "In Destructure" << endl;
	top = 0;
	delete [] stack_data;
}
/*
int main()
{
	my_stack stack;
	int choice;
	stack.init();
	do {
		cout << "1: For Insert data\n2: For delete data\n:0: For exit" << endl;
		cin >> choice;
		switch (choice) {

		case 1: int data;
			cout << "Insert value" << endl;
			cin >> data;
			if (!(stack.is_full())) {
				stack.push(data);
			} else {
				cout << "stack is full. Please do pop" << endl;
			}
			break;

		case 2: if (!(stack.is_empty())) {
				cout << "data ====>" << stack.pop() << endl;
			} else {
				cout << "stack is empty. Please do push" << endl;
			}
			break;
		case 0: stack.exit();
			break;
		}
			
	} while (choice);

	return 0;
}
*/
