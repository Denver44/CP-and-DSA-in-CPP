#include <bits/stdc++.h>
using namespace std;
// memcpy() is used to copy a block of memory from a location to another.It is declared in string.h
    int main()
{

    int *arr = new int[3];
    arr[0] = 1, arr[1] = 10, arr[2] = 100;

    int *arr2 = arr; // ---------------------shallow copy only address are copy.

    arr2[1] = 56; // chnaging the value of arr2[1] to 56 from 10.

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; // in both the chnages reflected
    }

    int *arr3 = new int[3];

    std::memcpy(arr3, arr2, sizeof(int) * 3); //----------- Deep copy.

    arr3[1] = 560; // changing the value of arr3[1] to 560 from 56.

    for (int i = 0; i < 3; i++)
    {
        cout << arr3[i] << " ";
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " "; // *----------- As iy was deep copy The chnage not ge reflectd back.
    }
    
    return 0;
}