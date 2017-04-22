#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 1;
	int z = 1;
	for (int i = 0; i < 10; i++) {
		cout << z << endl;
		z = x + y;
		x = y;
		y = z;
	}
}

