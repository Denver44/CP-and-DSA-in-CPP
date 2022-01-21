#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



void solve()
{
    string s;
    cin >> s;
    stack<int> s1;
    int num = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'd')
        {
            s1.push(num);
            num++;
        }
        else
        {
            s1.push(num);
            num++;
            while (s1.size() > 0)
            {
                cout << s1.top();
                s1.pop();
            }
        }
    }
    s1.push(num);
    while (s1.size() > 0)
    {
        cout << s1.top();
        s1.pop();
    }
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