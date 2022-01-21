#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xxor = 0;
    for (int i = 0; i < n; i++)
    {
        xxor = xxor ^ arr[i];
    }
    int rmsb = xxor & -xxor; // this will give the right most set bit of the xor of the twon differenbt numbers.
    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if ((rmsb & arr[i]) == 0) // that means it arr[i] right bit was off.
        {
            x = x ^ arr[i];
        }
        else
        {
            y = y ^ arr[i];
        }
    }

    //  AS we have to print it in ascending order.
    (x > y) ? cout << y << endl
                   << x << endl
            : cout << x << endl
                   << y << endl;

    return 0;
}