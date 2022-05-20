#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Most Easiest Question.
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        cout << "YES" << endl;
    else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        cout << "YES" << endl;
    else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        cout << "YES" << endl;
    else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
        cout << "YES" << endl;
    else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}

