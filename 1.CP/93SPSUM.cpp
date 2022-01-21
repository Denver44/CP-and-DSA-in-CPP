#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// here we have given two things n and m mis abouslte differnce between them
// both brother have to distrubres marvle in such way that differnce of prociousness must be m.
//  and gcd of both a and b also 1.
//  so first we have distubute marbles in such way that the both has differnce of m.
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll sum = (n * (n + 1) / 2);
    ll a = (sum + m) / 2;
    ll b = sum - a;
    if (sum < m)
    {
        cout << "No" << endl;
    }
    else
    {
        if ((a - b) == m && (a + b) == sum)
        {

            if (__gcd(a, b) == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return;
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