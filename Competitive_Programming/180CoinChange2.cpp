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
// Here we have to return the Number of Comibnation to make the amount no the Permutations.

class Solution {
public:
	int change(int amount, vector<int>& coins) {
		vector<int> tab(amount + 1, 0);
		tab[0] = 1; // For payment of 1 there is One way dont pay.

		for (int i = 0; i < coins.size(); ++i)
		{
			for (int j = coins[i]; j < tab.size(); ++j) // as we start from coins[i] so there will be no permuations.
			{
				tab[j] += (tab[j - coins[i]]);
			}
		}
		return  tab[amount];
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
