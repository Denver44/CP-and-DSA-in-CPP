#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    vector<ll> ans;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        ans.push_back(arr[i++]);
        ans.push_back(arr[j--]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
