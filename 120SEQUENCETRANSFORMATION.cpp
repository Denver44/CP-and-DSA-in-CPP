#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> m1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m1[a].push_back(i);
    }
    if (m1.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    int len = INT32_MAX;

    for (auto i : m1)
    {
        int ok = 0;

        if (i.second.size() == 1)
        {
            if (i.second[0] == 0 || i.second[0] == n - 1)
            {
                len = min(len, 1); // this means either 1 2 3 4 5 so for this scenario best answer is 1 for number 1. or   2 2 1 3 2 1 7 for this scenario best answer is 1 for number 7.
            }
            else
            {

                len = min(len, 2); // 3 3 2 3 2 5 3 2 3 2 so for this scenarion best answer is 2. which is givern by number 5.
            }
            continue;
        }

        for (int j = 0; j < i.second.size(); j++)
        {
            if (j == 0)
            {
                if (i.second[0] >= 1)
                {
                    ok++;
                }
                continue;
            }
            if (j == i.second.size() - 1)
            {
                if (i.second[j] < (n - 1))
                {
                    ok++;
                }
            }

            if ((i.second[j] - i.second[j - 1]) > 1)
            {
                ok++;
            }
        }
        len = min(len, ok);
    }
    cout << len << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}