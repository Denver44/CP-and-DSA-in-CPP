#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, pair<int, int>> m1;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        m1[a].first++;
        m1[a].second = i;
    }

    int minimal = INT32_MAX;
    int idx = -1;
    for (auto i : m1)
    {
        if (i.second.first == 1)
        {
            if (i.second.first < minimal)
            {
                minimal = i.second.first;
                idx = i.second.second;
            }
        }
    }
    cout << idx << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
