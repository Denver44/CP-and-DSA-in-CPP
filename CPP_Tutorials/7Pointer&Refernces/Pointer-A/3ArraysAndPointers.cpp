#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << arr << endl;
    cout << &arr[0] << endl;

    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;
    arr[3] = 20;

    cout << *arr << endl;
    cout << *(arr + 1) << endl;

    int *ptr = arr;
    ptr = &arr[0];
    // Both are same because arr always hold the address of the first element of the array.

    cout << arr << endl;
    cout << ptr << endl;

    cout << &arr << endl;
    cout << &ptr << endl;

    cout << sizeof(ptr) << endl;
    cout << sizeof(arr) << endl;

    ptr = ptr + 1;
    cout << *ptr << endl;

    ptr = arr + 1;
    cout << *ptr << endl;

    // arr++; This we can not do we cannot re assign a array
    ptr++; // We can re assign a ptr to point to a new locations.
    cout << *ptr << endl;
}
