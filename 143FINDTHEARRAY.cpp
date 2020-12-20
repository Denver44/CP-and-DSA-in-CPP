#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    ll evensum = 0, oddsum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        (i % 2 != 0) ? oddsum += arr[i] : evensum += arr[i];
    }
    int x = 1;
    if (evensum > oddsum)
        x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == x)
            cout << arr[i] << " ";
        else
            cout << "1 ";
    }
    cout << endl;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
}