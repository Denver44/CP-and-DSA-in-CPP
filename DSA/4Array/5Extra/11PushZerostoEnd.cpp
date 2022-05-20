#include <bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *arr, int size)
{
    int numZero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[numZero];
            arr[numZero++] = temp;
        }
    }
}