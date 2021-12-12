
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    float quantity, price;

    for (int i = 0; i < t; i++)
    {
        cin >> quantity >> price;
        cout << setprecision(6) << fixed;
        price *= quantity;
        if (quantity > 1000)
        {
            cout << price * 0.90<<endl;
        }
        else
        {
            cout << price << endl;
        }
    }

    return 0;
}