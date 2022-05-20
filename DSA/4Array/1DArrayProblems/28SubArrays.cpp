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

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr1[k] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}