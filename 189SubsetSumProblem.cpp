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
// Target Sum Problem.
class Solution {
public:
	int solve(vector<int> &, int );
};

int Solution::solve(vector<int> &A, int B) {

	int size = A.size();
	vector<vector<bool>> tab(size + 1, vector<bool>(B + 1, false));
	tab[0][0] = true;
	for (int i = 1; i <= size; i++)
		tab[i][0] = true;

	for (int i = 1; i <= size ; i++)
	{
		for (int j = 1; j <= B ; j++)
		{
			if (j >= A[i - 1]) // Only bat if score is Higher than he Score
				tab[i][j] = (tab[i - 1][j] || tab[i - 1][j - A[i - 1]]);
			else  // Unless put the score the earlier team did it.
				tab[i][j] = tab[i - 1][j];
		}
	}
	return tab[size][B];

}


void solve()
{
	vector<int> arr = { 2, 3, 5};
	Solution s1;
	log(s1.solve(arr, 7));

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


