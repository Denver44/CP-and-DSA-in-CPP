#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    map<int, int> ap;

    for (auto i : mp)
    {
        ap[i.second]++;
    }

    int maxi = 0;
    for (auto i : ap)
    {
        maxi = max(maxi, i.second);
    }

    int mini = INT32_MAX;
    for (auto i : ap)
    {
        if (i.second == maxi)
        {
            mini = min(mini, i.first);
        }
    }
    cout << mini << endl;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //This above part is for speed up our program
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}
