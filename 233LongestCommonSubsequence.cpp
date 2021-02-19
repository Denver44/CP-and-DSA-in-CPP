#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<int>
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

//


class Solution {
public:

// ------------------ ITERATIVE APPROACH----------------------------
	int longestCommonSubsequence(string text1, string text2) {

		int row = text1.size();
		int col = text2.size();
		vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));

		for (int i = 1; i < dp.size(); ++i)
		{
			for (int j = 1; j < dp[0].size(); ++j)
			{

				if (text1[i - 1] == text2[j - 1])
				{
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else {

					dp[i][j] =  max(dp[i - 1][j], dp[i][j - 1]);
				}

			}
		}

		return dp[row][col];
	}

// ----------------- RECURSIVE APPROACH----------------------------
	int helper(int m, int n , string &text1, string &text2, vector<vector<int>> &dp) {

		if (m == 0 || n == 0)
			return 0;

		if (dp[m - 1][n - 1] > -1)
			return dp[m - 1][n - 1];


		if (text1[m - 1] == text2[n - 1])
		{
			dp[m - 1][n - 1] = 1 + helper(m - 1, n - 1, text1, text2, dp);
		}
		else {

			dp[m - 1][n - 1] = max(helper(m - 1, n, text1, text2, dp), helper(m, n - 1, text1, text2, dp));
		}
		return dp[m - 1][n - 1];
	}

	int longestCommonSubsequence2(string text1, string text2) {

		vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, -1));
		return helper(text1.size(), text2.size(), text1, text2, dp);
	}

};


void solve()
{


	Solution s1;
	cout << s1.longestCommonSubsequence("ABCD", "ABFFFFGGGGGGGCD") << endl;
	cout << s1.longestCommonSubsequence2("ABCD", "AB");
}

int main()
{
	file_i_o();
	solve();
	return 0;
}

