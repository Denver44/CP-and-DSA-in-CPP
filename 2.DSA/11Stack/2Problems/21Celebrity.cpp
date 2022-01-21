#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = line.at(j) - '0';
        }
    }

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    while (s.size() >= 2)
    {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();

        if (arr[i][j] == 1)
        {
            s.push(j);
        }
        else
        {
            s.push(i);
        }
    }
    int pot = s.top();
    s.pop();

    for (int i = 0; i < n; i++)
    {
        if (i != pot)
        {
            if (arr[pot][i] == 1 || arr[i][pot] == 0)
            {
                cout << "none";
                return;
            }
        }
    }
    cout << pot << endl;
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