#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Pretest Passed.
void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    map<char, int> m1;
    int indexB = 0;
    bool flag = false;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 't' || s[i] == 'r' || s[i] == 'y' || s[i] == 'g' || s[i] == 'u' || s[i] == 'b')
        {
            m1[s[i]]++;
        }
        if (s[i] == 'b' && flag == false)
        {
            indexB = i;
            flag = true;
        }
    }
    if (m1.size() != 6)
    {
        cout << s << endl;
        return;
    }
    string newstr = "";
    for (int i = indexB; i < s.length(); i++)
    {
        if (s[i] == 'b')
        {
            newstr += 'b';
            s[i] = '*';
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '*')
        {
            newstr += s[i];
        }
    }
    cout << newstr << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}

// bantontrygu
// bestcoordinator
// bruhtrywatchinggura
