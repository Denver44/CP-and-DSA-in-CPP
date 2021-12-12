#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

// Here In this Question we can start from Any row of the Left most and Trvaerse to Right Most Col and collect thye MAx GOld.
// We can Go front up and Down to collect the Gold from Your spot.
// SO bigger Problem is on Right most Part.

class Solution
{
public:
	int goldmine(vector<vector<int>> &grid)
	{
		vector<vector<int>> tab(grid.size(), vector<int>(grid[0].size(), 0));
		int col = grid[0].size() - 1, row = grid.size() - 1;

		for (int j = col; j >= 0; --j)
		{
			for (int i = 0; i <= row; i++)
			{
				if (j == col) // For last Row it will be Grid[i][j] Only.
				{

					tab[i][j] = grid[i][j];
				}
				else if (i == 0) // Boundary points
				{
					tab[i][j] = grid[i][j] + max(tab[i][j + 1], tab[i + 1][j + 1]);
				}
				else if (i == row) // Boundary Points
				{
					tab[i][j] = grid[i][j] + max(tab[i][j + 1], tab[i - 1][j + 1]);
				}
				else
				{
					tab[i][j] = grid[i][j] + max(tab[i][j + 1], max(tab[i + 1][j + 1], tab[i - 1][j + 1]));
				}
			}
		}

		int res = 0;
		for (int i = 0; i < grid.size(); ++i)
		{
			res = max(res, tab[i][0]);
		}

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
