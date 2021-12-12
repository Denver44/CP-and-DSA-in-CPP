#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int salary;
    double gross;
    cout << setprecision(2) << fixed;
    for (int i = 0; i < t; i++)
    {
        cin >> salary;
        if (salary < 1500)
        {
            gross = salary + 0.1 * salary + 0.9 * salary;
        }
        else
        {
            gross = salary + 500 + 0.98 * salary;
        }
        cout << gross << endl;
    }

    return 0;
}