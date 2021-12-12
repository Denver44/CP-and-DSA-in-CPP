#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr1 = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    int *inv = new int[size];
    for (int i = 0; i < size; i++)
    {
        int val = arr1[i];
        inv[val] = i;
    }
    for (int i = 0; i < size; i++)
    {
        cout << inv[i] << endl;
    }

    return 0;
}