#include <iostream>
#include <algorithm>
using namespace std;

void print2X(int a)
{
    cout << a * 2 << " ";
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Multiple of 2 of elements are : ";
    for_each(arr, arr + 5, print2X);
    cout << endl;
    return 0;
}

/*
For each loop takes three arguments.
To use, For each loop use CPP library <algorithm>
for_each (starting point, end point , function fn)
*/
