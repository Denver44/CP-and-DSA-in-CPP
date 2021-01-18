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

// In this Question we have to Just return the pattern how the queen will sit on Board.
// Here We have fixed that one Queen Alawys sit in One Row.
// So We have to take Care of Cols only.
// So we have used for loop for Option of Cols For Queens.

class Solution
{
public:
	void printing(vector<vector<bool>> &chess, vector<vector<string>> &ans, int n)
	{
		vector<string> ans2;
		string psf = "";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (chess[i][j] == false)
					psf += ".";
				else
					psf += "Q";
			}
			ans2.push_back(psf);
			psf = "";
		}
		ans.push_back(ans2);
	}

	bool isSafe(vector<vector<bool>> &chess, int n, int row, int col) // !IMPORTANT
	{
		for (int i = row - 1, j = col; i >= 0; i--)
		{
			if (chess[i][j] == true)
				return false;
		}
		for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
		{
			if (chess[i][j] == true)
				return false;
		}
		for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
		{
			if (chess[i][j] == true)
				return false;
		}

		return true;
	}

	void helper(vector<vector<bool>> &chess, vector<vector<string>> &ans, int row, int n)
	{
		if (row == n)
		{
			printing(chess, ans, n);
			return;
		}
		for (int i = 0; i < n; i++)
		{
			if (isSafe(chess, n, row, i)) // If Condition Satisified then Only we will place the Queen.
			{
				chess[row][i] = true;
				helper(chess, ans, row + 1, n);
				chess[row][i] = false; // Backtrack.
			}
		}
	}

	vector<vector<string>> solveNQueens(int n)
	{
		vector<vector<string>> ans;
		vector<vector<bool>> chess(n, vector<bool>(n, false));
		helper(chess, ans, 0, n);
		return ans;
	}
};

void solve()
{

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	// cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}

