#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// if we want to find the number of count which has same ratio
//  first we should take the gcd of the x and y and the divide each x and y by there gcd.
//after than min of width/small width and height/small height we will get the number of count whihc has the same ratio.
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
