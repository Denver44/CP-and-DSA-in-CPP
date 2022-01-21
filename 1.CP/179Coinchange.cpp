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

// In these we have to return the minimum number of coins we have to use to make our amt.
// If we cant do it then return -1.

class Solution {
public:
	int coinChange(vector<int>& coins, int amount) {

		vector<int> tab(amount + 1, INT32_MAX - 1); // Initally all values are max.
		tab[0] = 0;// for zero the least way is 0.

		for (int i = 0; i < coins.size(); ++i)
		{
			for (int j = 1; j < tab.size(); ++j)
			{
				if (j >= coins[i]) // if the coins is greater then amt the only go.
				{
					tab[j] = min(tab[j], 1 + tab[j - coins[i]]);
					// The reason we use 1+ tab[j-coins[i]] is for amt of 2 we have used 1 coins and for rest of the amt means tab[j - coins[i]] we have to add these to it .
				}

			}
		}
		return (tab[amount] == INT32_MAX - 1) ? -1 : tab[amount];

	}
};


void solve()
{

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	loop (i, 0, t)
	solve();
	return 0;
}
