#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve()
{

    double a, b, x, y;
    cin >> a >> b >> x >> y;
    int count = 0;
    double res = (x / y);
    cout << res << endl;
    for (double i = a; i >= x; i--)
    {
        for (double j = b; j >= y; j--)
        {
            double k = (i / j);
            if (k == res)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
