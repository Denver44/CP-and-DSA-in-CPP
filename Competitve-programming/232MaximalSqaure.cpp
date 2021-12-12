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

class Solution {
public:
	int maximalSquare(vector<vector<char>>& matrix) {
		int ans = 0;
		int row = matrix.size() + 1, col = matrix[0].size() + 1;
		vector<vector<int>>dp(row, vector<int>(col, 0));



		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < col; j++)
			{

				if (matrix[i - 1][j - 1] == '0') {
					continue;
				}

				dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
				ans = max(ans, dp[i][j]);
			}
		}
		return ans * ans;

	}
};



void solve()
{



}


int main()
{
	file_i_o();
	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}

