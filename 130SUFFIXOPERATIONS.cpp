#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += abs(arr[i] - arr[i - 1]);
    }
    ll mini = min(ans - abs(arr[1] - arr[0]), ans - abs(arr[n - 1] - arr[n - 2])); // Boundary case

    for (int i = 1; i < n - 1; i++)
    {
        mini = min(mini, ans - (abs(arr[i] - arr[i - 1]) + abs(arr[i + 1] - arr[i]) - abs(arr[i + 1] - arr[i - 1]))); // this to check the for middle elements.
    }
    cout << mini << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}