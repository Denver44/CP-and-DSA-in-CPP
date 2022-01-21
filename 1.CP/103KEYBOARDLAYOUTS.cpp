#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


void solve()
{

    string board1, board2, query;
    cin >> board1 >> board2 >> query;
    map<char, char> m1;
    for (int i = 0; i < board1.size(); i++)
    {
        m1[board1[i]] = board2[i];
    }
    string ans = "";
    int flag = false;
    for (int i = 0; i < query.length(); i++)
    {
        if (isdigit(query[i]))
        {
            ans += (query[i]);
        }
        else
        {
            char find = query[i];
            if (isupper(find))
            {
                char a = m1[tolower(find)];
                char b = toupper(a);
                ans += b;
            }
            else if (islower(find))
            {
                char a = m1[find];
                ans += a;
            }
        }
    }
    cout << ans;
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
