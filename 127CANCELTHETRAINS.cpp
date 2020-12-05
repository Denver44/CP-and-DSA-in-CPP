#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> train;
    int collide = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        train[a]++;
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        train[a]++;
    }

    for (auto i : train)
    {
        if (i.second == 2)
        {
            collide++;
        }
    }
    cout << collide << endl;
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