#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{

    ll n_queries;
    ll k;
    cin >> n_queries >> k;
    ll arr[n_queries];
    for (ll i = 0; i < n_queries; i++)
    {
        cin >> arr[i];
    }
    ll ans;
    bool flag = 0;
    ll i;
    for (i = 0; i < n_queries; i++)
    {
        if (arr[i] < k)
        { // means if any day the no of queries is less than the k  then break.
            flag = 1;
            ans = i;
            break;
        }
        else
        {
            arr[i + 1] += (arr[i] - k);
        }
    }
    if (flag == 1)
    {
        cout << ans << endl;
    }
    else
    {
        ans = n_queries + (arr[n_queries - 1] / k); // this if in the last the number of qurries left / k + total queries gives the day.
        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}