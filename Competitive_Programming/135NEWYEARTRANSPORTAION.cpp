#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    int i = 1;
    while (i <= n)
    {
        i += arr[i];
        if (arr[t] == arr[i] && i == t)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
