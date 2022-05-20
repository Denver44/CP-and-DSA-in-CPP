#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// In this we have to find the number of factors
// so the number of factors formula is (a+1)(b+1)(c+1) here a,b,c are the power of  number
void solve()
{
    int n;
    cin >> n;
    map<ll, ll> primepower;
    while (n--)
    {
        int t;
        cin >> t;

        for (int i = 2; i * i <= t; i++)
        {
            while (t % i == 0)
            {
                primepower[i]++;
                t /= i;
            }
        }

        if (t > 1)
        {
            primepower[t]++;
            t = 1;
        }
    }

    ll ans = 1;
    for (auto i : primepower)
    {
        ans *= (1 + i.second);
    }
    cout << ans << endl;
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
