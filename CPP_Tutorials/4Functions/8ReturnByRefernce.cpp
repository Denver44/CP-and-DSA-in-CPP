#include <iostream>
using namespace std;

// program for return by reference
int &fun(int &x)
{
	x += 666;
	return x;
}
int main()
{
	int a = 10;
	fun(a);
	cout << a << endl;
}