#include <iostream>
#include <vector>

using namespace std;

#define MAX 100

int main()
{
	vector<int> arr(MAX); // This size mention is opetional
	int count;
	string str1 = "Hello";
	string str2;

	cout << "enter count" << endl;
	cin>>count;
	arr.resize(count); // Using this vector size will change to count

	for (int i = 0; i < count; i++) {
		cin >>arr[i];
	}
	for (int i = 0; i < count; i++) {
		cout<< " "<<  arr[i];
	}

	cout<< "enter string"<< endl;
	cin>> str2;
	cout<< endl;
	string str = str1 + str2;
	cout<< str<< endl;
	if (str1 > str2) {
		cout<< "str1 is greater than str2"<< endl;
	} else if (str1 == str2) {
		cout<< "str1 is equal to str2"<< endl;
	} else {
		cout<< "str1 is less than str2"<< endl;
	}
	return 0;
}
