#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Solved Using Dp ----------------------
void solve()
{

    int len, n;
    cin >> len >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dp[3][len + 1];

    for (int j = 0; j < len + 1; j++)
    {
        dp[0][j] = 0;
        dp[1][j] = 9999999;
        dp[2][j] = -9999999;
    }
    dp[0][0] = {1}; // tot
    dp[1][0] = {0}; // min
    dp[2][0] = {0}; // max

    for (int i = 1; i <= len; i++) // col
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= i)
            {
                int ramt = i - a[j];
                dp[0][i] += dp[0][ramt];
                dp[1][i] = min(dp[1][i], 1 + dp[1][ramt]);

                int x = 0;
                if (dp[2][ramt] != -9999999)
                {
                    x = dp[2][ramt] + 1;
                }
                else
                {
                    x = -9999999;
                }
                dp[2][i] = max(dp[2][i], x);
            }
        }
    }

    if (dp[1][len] == 9999999)
    {
        cout << "-1 ";
    }
    else
    {
        cout << dp[1][len] << " ";
    }
    if (dp[2][len] == -9999999)
    {
        cout << "-1";
    }
    else
    {
        cout << dp[2][len];
    }
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