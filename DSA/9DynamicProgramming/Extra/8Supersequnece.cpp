#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

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

int smallestSuperSequence(string str1, string str2)
{
    int lcs = longestCommonSubsequence(str1, str2);

    return (str1.size() + str2.size()) - lcs;
}
void solve()
{

    cout << smallestSuperSequence("abcd", "def");
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