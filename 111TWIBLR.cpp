#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

void solve()
{
    int a, b;
    cin >> a >> b;

    int max = 2 * (a) + 100;
    int left = max - b;
    cout << left << endl;
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
