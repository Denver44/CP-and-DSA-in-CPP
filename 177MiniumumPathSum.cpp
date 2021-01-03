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
// We have to identify where is the smaller problem.
// So start solving from there to bigger problem and we will get the answer.
// We can go downward or left size.
// So we choose the lowest of donwaard and left side and add with current value of i and j so this way we get the cost till that path.
class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		vector<vector<int>> tab(grid.size(), vector<int>(grid[0].size(), 0));

		for (int i = grid.size() - 1; i >= 0; i--)
		{
			for (int j =  grid[0].size() - 1; j >= 0; j--)
			{
				if (i == grid.size() - 1 && j == grid[0].size() - 1)
				{
					tab[i][j] = grid[i][j];

				}
				else if (i == grid.size() - 1) {
					tab[i][j] = grid[i][j] + tab[i][j + 1];

				}
				else if (j == grid[0].size() - 1) {
					tab[i][j] = grid[i][j] + tab[i + 1][j];

				}
				else {
					tab[i][j] =  min(grid[i][j] + tab[i + 1][j] , grid[i][j] + tab[i][j + 1] );
				}

			}
		}
		return tab[0][0];
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
