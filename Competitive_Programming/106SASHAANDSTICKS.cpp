#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// As sahsha is alawsy start
// so fiwe got n/k odd then sasha wins.
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll sashascore = 0;
    ll lenascore = 0;
    int player = 1;

    if ((n / k) % 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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
