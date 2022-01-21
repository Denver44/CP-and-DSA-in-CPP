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
class Solution
{
public:
	int solve(vector<int> &A, vector<int> &B, int C) {
		int bsize = B.size();
		vector<vector<int>>tab(bsize + 1, vector<int>(C + 1, 0));
		for (int i = 1; i < tab.size(); ++i)
		{
			for (int j = 1; j < tab[0].size(); ++j)
			{
				if (j >= B[i - 1])
				{
					tab[i][j] = max(tab[i - 1][j - B[i - 1]] + A[i - 1] , tab[i - 1][j]);

				}
				else
				{
					tab[i][j] = tab[i - 1][j]; // The Weight above team Made.
				}
			}
		}

		return tab[bsize][C];
	}
};
void solve()
{
	vector<int> A;
	A.push_back(60);
	A.push_back(100);
	A.push_back(120);
	vector<int> B;
	B.push_back(10);
	B.push_back(20);
	B.push_back(30);
	int C = 50;
	Solution s1;
	int ans = s1.solve(A, B, C);
	log(ans);

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



