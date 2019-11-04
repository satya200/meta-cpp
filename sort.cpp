#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
	return (i > j);
}

int main()
{
	int data[] = {3,5,4,6,7};

	sort (data, data+5, compare);

	for (int i = 0; i < sizeof(data)/sizeof(data[i]); i++) {
		cout << data[i] << endl;
	}
	return 0;
}
