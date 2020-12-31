#include <bits/stdc++.h>
using namespace std;
#define log(a) cout<<(a)<<endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<int>
#define loop(i,a,b) for(int i = a; i < b; i++)
#define looprev(i,a,b) for(int i = a-1; i >=b; i--)


void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
    string s; cin >> s;
    if (s.size() == 1) {
        return;
    }
    else if (s.size() == 2)
        if (s[0] == s[1]) {
            log(1)
            return ;
        }
        else {
            log(0)
            return ;
        }
    else
    {
        int i = 0;
        loop(i, 0, s.size())
        if (s[i] == s[i + 1] && ((i + 2) < s.size() && s[i] == s[i + 2]))
            s[i + 1] = s[i + 2] = '*';
        else if (s[i] == s[i + 1])
            s[i + 1]  = '*';
        else if ((i + 2 < s.size()) && s[i] == s[i + 2])
            s[i + 2]  = '*';

    }
    // log(s)
    int ans = 0, i = 0;
    loop(i, 0, s.size())
    if (s[i] == '*')
        ans++;

    log(ans)



}

int main()
{
    file_i_o();
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();

    }
    return 0;
}

