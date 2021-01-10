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

// Dp - Greedy Question Include Exclude
// Here we cannot color two consecutives house same color and we have to return the min cost to color all the house ith no two houses have same color.


class Solution {
public:
	solve(vector<vector<int> > &A);
};


int Solution::solve(vector<vector<int> > &A) {

	int n = A.size();
	int costRed = 0, costBlue = 0, costGreen = 0;
	for (int i = 0; i < n; ++i)
	{
		int newRed = A[i][0] + min(costBlue, costGreen);
		int newBlue = A[i][1] + min(costGreen, costRed);
		int newGreen = A[i][2] + min(costBlue, costRed);
		costRed = newRed;
		costBlue = newBlue;
		costGreen = newGreen;
	}

	return min(costRed, min(costBlue, costGreen));
}



void solve()

{
	int n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(3));
	for (int i = 0 ; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];

	Solution s1;
	log(s1.solve(arr))

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	loop (i, 0, t)
	solve();
	return 0;
}
// 4
// 1 5 7
// 5 8 4
// 3 2 9
// 1 2 4

