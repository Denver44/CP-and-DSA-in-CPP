#include <bits/stdc++.h>
using namespace std;
#define ll long long
//  n will be from 1 to 50 including both.
// As the number should be distinct like for n = 15 69 =6+9 =15 here both 6 and 9 are distinct.
// so number can be from 9 to 0 only if 9 is selected then we can take it next time so next time it can be 8 to one only.
// and if in last we dont get n ==0 thats means we didnt ge the value.
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;

    for (int i = 9; i >= 1; i--)
    {
        if (i <= n)
        {
            n -= i;
            ans.push_back(i);
        }
    }
    if (n != 0)
    {
        cout << -1;
        return;
    }

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
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
        cout << endl;
    }
    return 0;
}
