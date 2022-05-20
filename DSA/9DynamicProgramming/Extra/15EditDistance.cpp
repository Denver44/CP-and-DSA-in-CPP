#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Here We can do three Operation Delte. Insert or Replace

int helper(int m, int n, string &s1, string &s2, vector<vector<int>> &dp)
{

    if (m == 0 && n == 0)
        return 0;
    if (m == 0 && n > 0)
        return n;
    if (m > 0 && n == 0)
        return m;

    if (dp[m - 1][n - 1] != -1)
        return dp[m - 1][n - 1];

    if (s1[m - 1] == s2[n - 1])
        dp[m - 1][n - 1] = helper(m - 1, n - 1, s1, s2, dp);
    else
    {
        dp[m - 1][n - 1] = min(1 + helper(m - 1, n - 1, s1, s2, dp), min(1 + helper(m - 1, n, s1, s2, dp), 1 + helper(m, n - 1, s1, s2, dp)));
    }
    return dp[m - 1][n - 1];
}

int editDistance(string s1, string s2)
{
    vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
    return helper(s1.size(), s2.size(), s1, s2, dp);
}

int main()
{
    cout << editDistance("abd", "db");
    return 0;
}