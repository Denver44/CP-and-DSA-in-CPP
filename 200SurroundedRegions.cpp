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

// Here if O is surrounded Perfectly by all its four direction with X then make the O as X
// If there is O at border then we can not make it X.
// So here what we did the Bunodary O connected to another 0 is make * that we can make them X.
// Else everyone can become X.

class Solution {
public:


	void dfs( vector<vector<char>> &board , int i, int j, int r , int c)
	{

		if (i < 0 || j < 0 || i >= r || j >= c)
			return ;

		if (board[i][j] == 'O') {
			board[i][j] = '*';
			dfs(board, i - 1, j, r, c);
			dfs(board, i + 1, j, r, c);
			dfs(board, i, j - 1, r, c);
			dfs(board, i, j + 1, r, c);

		}
	}

	void solve(vector<vector<char>>& board) {
		if (board.empty())
			return;
		int r = board.size();
		int c = board[0].size();
		if (r <= 1)
			return ;
		if (c <= 1)
			return;


		for (int i = 0; i < r; ++i) // Row Boundary
		{
			if (board[i][0] == 'O')
				dfs(board, i, 0, r, c);
			if (board[i][c - 1] == 'O')
				dfs(board, i, c - 1, r, c);
		}


		for (int j = 0; j < c; ++j) // Column Boundary
		{
			if (board[0][j] == 'O')
				dfs(board, 0, j, r, c);
			if (board[r - 1][j] == 'O')
				dfs(board, r - 1, j, r, c);
		}


		for (int i = 0; i < board.size(); ++i)
		{
			for (int j = 0; j < board[0].size(); ++j)
			{

				if (board[i][j] == '*')
					board[i][j] = 'O';
				else
					board[i][j] = 'X';

			}
		}



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



