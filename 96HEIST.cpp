#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//  here untill  both list doesnt get empty we have to play.
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    ll i = 0;
    ll l = arr[0];
    ll diff = arr[i] - i;
    ll count = 0;
    for (; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                count++;
                diff++; // help in confition breaking
            }
        }
    }
    cout << count;
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
