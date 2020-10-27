#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve()
{

    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll c = __gcd(x, y);
    x /= c;
    y /= c;
    cout << min(a / x, b / y);
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
