#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	int **p = new int *[m]; // here we are creating array of pointer whose address is going to save in p and ist size is m.

	for (int i = 0; i < m; i++)
	{
		p[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			p[i][j] = i + j;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < m; i++)
	{
		delete[] p[i]; // Here first we delete the array which a array of pointer contains in heap
	}
	delete[] p; // Now we are deleting the main pointer which hold the address of array of pointers in heap.
}
