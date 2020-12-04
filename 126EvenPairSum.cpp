#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{

    unsigned long long int x, y;
    cin >> x >> y;
    ll even1 = x / 2;
    ll odd1 = x - even1;
    ll even2 = y / 2;
    ll odd2 = y - even2;
    cout << even1 * even2 + odd1 * odd2 << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}