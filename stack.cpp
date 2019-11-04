#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main()
{
	char str[10] = "satya";
	stack<char> stk;
	int i;
	for (i = 0; i < str[i]; i++) {
		stk.push(str[i]);
	}
	cout << "Reverse string" << endl;
	while (!stk.empty()) {
		cout << stk.top();
		stk.pop();	
	}
	cout<<endl;
	return 0;
}
