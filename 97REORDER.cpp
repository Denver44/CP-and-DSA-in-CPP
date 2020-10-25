#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve()
{

    int n;
    ll m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int tot = 0;

    for (int j = 1; j <= n; j++)
    {
        tot += arr[j];
    }

    if (tot == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
