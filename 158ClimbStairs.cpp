#include <bits/stdc++.h>
using namespace std;
#define log(a) cout<<(a)<<endl;
typedef long long ll;
typedef unsigned long long ull;


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
	int climbStairs(int n)
	{
		ios::sync_with_stdio(0);
		cout.tie(0);
		if (n == 1)
			return 1;
		int *tab = new int[n + 1];
		tab[1] = 1;
		tab[2] = 2;
		for (int i = 3 ; i <= n; i++)
			tab[i] = tab[i - 1] + tab[i - 2];
		return tab[n];


	}
};

void solve()
{
	Solution s1;
	log(s1.climbStairs(4));
	log(s1.climbStairs(5));
	log(s1.climbStairs(45));

}

int main()
{
	file_i_o();
	int t = 1;
	// cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
		return 0;
	}
}