#include "stack_class.h"

int main()
{
        my_stack stack;
        int choice;
	cout << "Init main" << endl;
        //stack.init(); //Started using constructure
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
                case 0: //stack.exit();
                        break;
                }
                        
        } while (choice);

        return 0;
}
