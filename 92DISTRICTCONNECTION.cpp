#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int len;
    cin >> len;
    map<int, vector<int>> m1;
    set<int> s1;
    for (int i = 1; i <= len; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
        m1[x].push_back(i);
    }
    if (s1.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (auto i : m1)
    {
        cout << i.first << " ";
        int size = i.second.size();
        for (int j = 0; j < size; j++)
        {
            cout << i.second[j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> other;
    for (auto i : m1)
    {
        other.push_back(i.second);
    }
    for (int i = 1; i < other.size(); i++)
    {
        for (auto j : other[i])
        {
            cout << other[0][0] << " " << j << endl;
        }
    }
    for (int i = 1; i < other[0].size(); i++)
    {
        cout << other[0][i] << " " << other[1][0] << endl;
    }
    return;
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