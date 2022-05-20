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



int minPalindromicCut(string s)
{

// gap startergy
	vector<vector<bool>> mark(s.length(), vector<bool>(s.length()));
	for (int g = 0; g < s.length(); ++g)
	{
		for (int i = 0 ,  j = g; j < s.length(); ++i , ++j)
		{
			if (g == 0)
				mark[i][j] = true;
			else if (g == 1) {
				mark[i][j] = (s[j] == s[i]);
			} else  {
				if ( s[i] == s[j] && mark[i + 1][j - 1] == true ) {
					mark[i][j] = true;
				}
				else {
					mark[i][j] = false;
				}
			}
		}
	}

	// O(N3)

	vector<vector<int>> dp(s.length(), vector<int>(s.length()));
	for (int g = 0; g < s.length(); ++g)
	{
		for (int i = 0 ,  j = g; j < s.length(); ++i, ++j)
		{
			if (g == 0)
				dp[i][j] = 0;
			else if (g == 1) {
				dp[i][j] = (mark[i][j] ? 0 : 1);
			} else  {
				if (mark[i][j])
					dp[i][j] = 0;
				else {
					int minValue = INT32_MAX;
					for (int k = i; k < j; ++k)
					{
						minValue = min(minValue, dp[i][k] + dp[k + 1][j] + 1);
					}
					dp[i][j] = minValue;
				}
			}
		}
	}


	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 0; j < s.length(); ++j)
		{
			cout << mark[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 0; j < s.length(); ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[0][s.size() - 1];

}

int minPalindromicCut2(string s)
{

	vector<vector<bool>> mark(s.length(), vector<bool>(s.length()));
	for (int g = 0; g < s.length(); ++g)
	{
		for (int i = 0 ,  j = g; j < s.length(); ++i , ++j)
		{
			if (g == 0)
				mark[i][j] = true;
			else if (g == 1) {
				mark[i][j] = (s[j] == s[i]);
			} else  {
				if ( s[i] == s[j] && mark[i + 1][j - 1] == true ) {
					mark[i][j] = true;
				}
				else {
					mark[i][j] = false;
				}
			}
		}
	}

	vector<int> dp(s.size());
	dp[0] = 0;
	dp[1] = (s[0] == s[1] ? 0 : 1);

	for (int i = 2; i < s.size(); ++i)
	{
		if (mark[0][i]) // Like we have string bbbbbbbbbbbbbbbbbbb then no need of cut .
		{
			dp[i] = 0;
		}
		else
		{

			int min = INT32_MAX;
			for (int k  = i; k >= 1 ; --k )
			{
				if (mark[k][i])
				{
					if (dp[k - 1] < min) {
						min = dp[k - 1];
					}

				}
			}
			dp[i] = min + 1;
		}
	}
	return dp[s.size() - 1];

}


void solve()
{
	string s;
	cin >> s;
	log(minPalindromicCut2(s));

}




int main()
{
	file_i_o();
	solve();
	return 0;
}

