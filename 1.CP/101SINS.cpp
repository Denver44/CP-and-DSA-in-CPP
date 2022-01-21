#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// This eatfest war continues till either they have the same number of chocolates so for this e use gcd greatest common divisor
//  or atleast one of them is left with no chocolates.

// Easiset problem just we have to find the common divisor where both get same.
// x= x-y and y= y-x formula is for gcd.
// As here it is not mention they can eat how mkuch choclates in one time
// sow we take gcd the greatest common divisor where they get equal.
void solve()
{

    int x, y;
    cin >> x >> y;
    int res;
    if (x == y)
    {
        cout << x + y << endl;
        return;
    }
    else if (x == 0 || y == 0)
    {
        cout << max(x, y) << endl;
    }
    else
    {
        res = __gcd(x, y);
    }
    cout << 2 * res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
