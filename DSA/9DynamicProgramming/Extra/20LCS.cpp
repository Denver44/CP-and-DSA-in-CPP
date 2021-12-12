#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Solution
{
public:
    int helper(int m, int n, string &text1, string &text2, vector<vector<int>> &dp)
    {

        if (m == 0 || n == 0)
            return 0;

        if (dp[m - 1][n - 1] > -1)
            return dp[m - 1][n - 1];

        if (text1[m - 1] == text2[n - 1])
        {
            dp[m - 1][n - 1] = 1 + helper(m - 1, n - 1, text1, text2, dp);
        }
        else
        {

            dp[m - 1][n - 1] = max(helper(m - 1, n, text1, text2, dp), helper(m, n - 1, text1, text2, dp));
        }
        return dp[m - 1][n - 1];
    }

    int longestCommonSubsequence(string text1, string text2)
    {

        vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, -1));
        return helper(text1.size(), text2.size(), text1, text2, dp);
    }
};
