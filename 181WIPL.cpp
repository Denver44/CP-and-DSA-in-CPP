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

vector<vector<int>> dp;

int solve( vector<int> & arr , int height, int h1, int h2 , int i)
{
	int n =  arr.size();
	if (h1 >= height)
	{
		if (h2 >= height) {
			return i;
		}
		return 1e9;
	}
	if (i >= n) {
		return 1e9;
	}
	if (dp[i][h1] != -1) {
		return dp[i][h1];
	}

	return dp[i][h1] =  min(solve(arr, height, h1 + arr[i] , h2 , i + 1) , solve(arr, height, h1 , h2 + arr[i], i + 1));
}

void solve()
{
	int n, h;
	cin >> n >> h;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end(), greater<int>());
	dp.assign(n + 1, vector<int>( h + 10, -1));
	int res = solve(arr, h, 0, 0, 0);
	if ( res == 1e9) {
		log(-1)
	}
	else {
		log(res)
	}

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

