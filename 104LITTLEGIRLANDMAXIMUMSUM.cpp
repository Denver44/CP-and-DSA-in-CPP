#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// ---- Vector diff array method
//  as her ethe number of query is repated number of times
//  thats why we use vector diff array method
//  after the sroting both tha array and qi=uery index
//  and multplying arr[i] * qarr[i] and taking the sum we git the answer
// The bruteforce approcah is that we have to every permutations.
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    vector<ll> qarr(n, 0);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        qarr[l]++;
        if (r + 1 < n)
        {
            qarr[r + 1]--;
        }
    }

    for (ll i = 1; i < n; i++)
    {
        qarr[i] += qarr[i - 1];
    }

    sort(arr.begin(), arr.end());
    sort(qarr.begin(), qarr.end());

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (arr[i] * qarr[i]);
    }
    cout << sum << endl;
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
