#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '.')
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    // Using dp Bottom Up Approach.

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                arr[i][j] = 0;
            else
            {
                int min_value = 0, up = i + 1, left = j - 1, right = j + 1;
                if (up >= 0 && left >= 0 && right < m)
                {
                    min_value = min(arr[up][j], min(arr[up][left], arr[up][right]));
                    arr[i][j] += min_value;
                }
                else
                    min_value = 0;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
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
