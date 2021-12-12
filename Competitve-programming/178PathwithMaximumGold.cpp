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

	int dfs(vector<vector<int>>& grid , vector<vector<bool>>& visited, int i, int j, int row, int col)
	{
		if (i < 0 || j < 0 || i >= row || j >= col || visited[i][j] == true || grid[i][j] == 0)
			return 0 ;

		visited[i][j] = true; // visit true.
		int a = 0, b = 0, c = 0, d = 0;

		if ( i - 1 >= 0 ) {

			a = grid[i][j] + dfs(grid, visited, i - 1, j, row, col);
		}
		if ( i + 1 < row) {

			b = grid[i][j] + dfs(grid, visited, i + 1, j, row, col);
		}
		if ( j - 1 >= 0 ) {

			c = grid[i][j] + dfs(grid, visited, i , j - 1, row, col);
		}
		if ( j +  1 < col ) {

			d = grid[i][j] + dfs(grid, visited, i, j + 1, row, col);
		}
		visited[i][j] = false; // Backtrack

		return max(a, max(b, max(c, d))); // return the max till that point
	}
	int getMaximumGold(vector<vector<int>>& grid) {

		int row = grid.size();
		int col = grid[0].size();
		vector<vector<bool>> visited(row, vector<bool>(col, false));

		int ans = 0;

		for (int i = 0 ; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (!visited[i][j]) {
					ans = max(ans , dfs(grid, visited, i, j, row, col));
				}
			}
		}

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
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}


// ------------------------ 2n Version ------------------
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a, which represents a gold mine.
// 4. You are standing in front of left wall and are supposed to dig to the right wall. You can start from
//      any row in the left wall.
// 5. You are allowed to move 1 cell right-up (d1), 1 cell right (d2) or 1 cell right-down(d3).
// 6. Each cell has a value that is the amount of gold available in the cell.
// 7. You are required to identify the maximum amount of gold that can be dug out from the mine.

// ----------------------- Solving using Tabulation method Bottom-up Approach --------------
// O(n^2)
class Solution
{
public:
	int goldmine(vector<vector<int>> &grid)
	{
		vector<vector<int>> tab(grid.size(), vector<int>(grid[0].size() , 0));
		int col = grid[0].size() - 1, row = grid.size() - 1;

		for (int j = col; j >= 0; --j)
		{
			for (int i = 0; i <= row; i++)
			{
				if ( j == col)
					tab[i][j] = grid[i][j];
				else if (i == 0)
					tab[i][j] = grid[i][j] + max(tab[i][j + 1] , tab[i + 1] [j + 1]);
				else if (i == row )
					tab[i][j] = grid[i][j] + max(tab[i][j + 1] , tab[i - 1] [j + 1]);
				else
					tab[i][j] = grid[i][j] + max(tab[i][j + 1] , max(tab[i + 1] [j + 1] , tab[i - 1] [j + 1]));
			}
		}

		int res = 0;
		for (int i = 0; i < grid.size(); ++i)
			res = max(res, tab[i][0]);
		return res;
	}
};

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> grid(n, vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> grid[i][j];
		}
	}

	Solution s1;
	cout << s1.goldmine(grid);
}
