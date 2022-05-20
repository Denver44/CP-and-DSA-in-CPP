#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int even = 2, startvalue = 1, odd = (n % 2 != 0) ? (n - 2) : (n - 3);
    for (int i = 1; i <= n; i++)
    {
        for (int j = startvalue; j < startvalue + n; j++)
            cout << j << " ";
        cout << endl;
        if (i == (n / 2) && (n % 2 == 0))
            startvalue = (--even * n) + 1;
        else if (i > (n / 2))
        {
            startvalue = (odd * n) + 1;
            odd -= 2;
        }
        else
        {
            startvalue = (even * n) + 1;
            even += 2;
        }

    }
}

