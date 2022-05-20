#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    string s;
    cin >> s;
    char ch = s[0];
    int a = ch - '0';
    s = s.substr(1);
    int newlen = s.length();
    int tot = 0;
    tot += (a - 1) * 10;
    if (newlen == 3)
    {
        tot += 10;
    }
    else if (newlen == 2)
    {
        tot += 6;
    }
    else if (newlen == 1)
    {
        tot += 3;
    }
    else
    {
        tot += 1;
    }
    cout << tot << endl;
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