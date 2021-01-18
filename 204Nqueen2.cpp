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
// In this Question we have to Just return the Total Number of Count the Nqueen can Be Placed for n*n Board.
// using Branh and Bound Technique.
// Here We have fixed that one Queen Alawys sit in One Row.
// So We have to take Care of Cols only.
// So we have used for loop for Option of Cols For Queens.


class Solution {
public:
	int count  = 0;
	vector<int> cols, rev, dia;
	void helper(vector<vector<bool>> &chess , int row, int n)
	{
		if (row == n)
		{
			count++;
			return;
		}

		for (int col = 0; col < n; col++)
		{
			if (cols[col] == false && dia[row + col] == false && rev[row - col + (n - 1)] == false)
			{
				chess[row][col] = true;
				cols[col] = true;
				dia[row + col] = true;
				rev[row - col + (n - 1)] = true;
				helper(chess, row + 1, n);
				chess[row][col] = false;
				cols[col] = false;
				dia[row + col] = false;
				rev[row - col + (n - 1)] = false;
			}
		}

	}
	int totalNQueens(int n) {

		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		cols.assign(n, false);
		dia.assign(2 * n - 1, false);
		rev.assign(2 * n - 1, false);
		vector<vector<bool>> chess (n, vector<bool>(n, false));
		helper(chess, 0, n);
		return count;

	}
};

void solve()
{
	Solution s1;
	log(s1.totalNQueens(9));
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


