#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (k > s.size()) // if string size is less than k then it is impossible to craete different charcter.
    {
        cout << "impossible";
        return;
    }

    map<char, int> m1;
    for (int i = 0; i < s.size(); i++)
    {
        m1[s[i]]++;
    }

    int len = (k - m1.size());
    if (len < 0) // if we have string given which has 6 diffrent words and we have to make 4 differnt characters then no chnage so answer will be zero.
    {
        cout << 0 << endl;
        return;
    }
    cout << len << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
