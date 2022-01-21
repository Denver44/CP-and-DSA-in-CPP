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
// Using DSF we Solved this Problem
// We cannoit walk on land which are Connected to Boundary and Also on Sea
// So we have to return the number of Count Where we can Walk. except the above place.
class Solution {
public:
	void helper(vector<vector<int>>& A , int i, int j , int r , int c)
	{
		if (i < 0 || j < 0 || i >= r || j >= c)
		{
			return;
		}

		if (A[i][j] == 1)
		{
			A[i][j] = 0;
			helper( A , i - 1,  j , r , c);
			helper( A , i + 1,  j , r , c);
			helper( A , i,  j - 1 , r , c);
			helper( A , i,  j + 1 , r , c);
		}
	}

	int numEnclaves(vector<vector<int>>& A) {
		int r = A.size(), c = A[0].size();

		for (int i = 0; i < r; ++i)
		{
			if (A[i][0] == 1)
				helper(A, i, 0, r, c);
			if (A[i][c - 1] ==  1)
				helper(A, i, c - 1, r, c);
		}
		for (int i = 0; i < c; ++i)
		{
			if (A[0][i] == 1)
				helper(A, 0, i, r, c);
			if (A[r - 1][i] ==  1)
				helper(A, r - 1, i, r, c);
		}
		int count = 0;
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				if (A[i][j] == 1)
					count++;
			}
		}

		return count;
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



