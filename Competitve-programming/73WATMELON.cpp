#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        cout << "NO" << endl;
    }
    else if (sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
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