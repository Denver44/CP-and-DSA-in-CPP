#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void getSubsequence(string s, string psf)
{
    if (s.empty())
    {
        cout << psf << endl;
        return;
    }

    getSubsequence(s.substr(1), psf + s[0]);
    getSubsequence(s.substr(1), psf);
    return;
}

void solve()
{
    getSubsequence("abc", "");
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