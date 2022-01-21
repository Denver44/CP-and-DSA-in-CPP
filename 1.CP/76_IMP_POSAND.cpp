#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int powerof2(int a)
{
    return a != 0 && ((a & (a - 1)) == 0);
}

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1" << endl;
    }
    else if (n == 3)
    {
        cout << "2 3 1" << endl;
    }
    else if (powerof2(n))
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "2 3 1 ";
        for (int i = 4; i <= n;)
        {
            if (powerof2(i))
            {
                cout << i + 1 << " " << i << " ";
                i += 2;
            }
            else
            {
                cout << i << " ";
                i++;
            }
        }
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