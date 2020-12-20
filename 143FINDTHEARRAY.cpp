#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// here we have the array beautiful if it one of its neighbour is divisibe by them.
// so for this 1 is the best approach to make every number one then like 2 1 8 1
// here 2 is neigbours is 1 and 1 neigbours 1 and 8 neighbours is also 1 so they divisble
// now we have to make the array in such a way that sum of the new array
// 2* ai-bi should be less than Array sum.
// so we take evensum and oddsum and whose sum is less we make them 1 and other one as it is so that will be cancel out it.
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