#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
    int i = 0;        // taking the first index;
    int l = arr[0];   // this is the lenght
    int diff = l - i; // if every number maintain this differnce then there is no missing elemnet.
    int count = 0;    // this help us to count the number of missing element
    for (; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i) // till the differnce not get normalize this loop will run
            {
                count++; // as many time this loop run it means that much number is missing.
                diff++;
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
