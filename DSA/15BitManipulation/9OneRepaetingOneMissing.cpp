#include <iostream>
using namespace std;

int main()
{
    int n; // number of elments
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // inserting each element in array
    }

    int xxor = 0;
    for (int i = 0; i < n; i++)
    {
        xxor = xxor ^ arr[i]; // xor of the array elements.
    }
    for (int i = 1; i <= n; i++)
    {
        xxor = xxor ^ i; // creatig duplicacy of number to find missing and duplicate number. xor value.
    }

    int rsbm = xxor & -xxor;
    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & rsbm) == 0)
        {
            x = x ^ arr[i];
        }
        else
        {
            y = y ^ arr[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if ((i & rsbm) == 0)
        {
            x = x ^ i;
        }
        else
        {
            y = y ^ i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Missing Number -> " << y << endl;
            cout << "Repeating Number-> " << x << endl;
            break;
        }
        else if (arr[i] == y)
        {
            cout << "Missing Number -> " << x << endl;
            cout << "Repeating Number-> " << y << endl;
            break;
        }
    }

    return 0;
}