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
class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {

		int size = cost.size(); //3
		vector<int> tab(size + 1, 0);
		tab[size] = 0; // For the destination we dont want to Pay.
		tab[size - 1] = cost[size - 1]; // Last we have to that Cost Only.
		tab[size - 2] = min(cost[size - 2] + tab[size - 1] , cost[size - 2] + tab[size ]); // For Second last.
		for (int i = size - 3; i >= 0; i--)
			tab[i] = min(tab[i + 1] + cost[i] , tab[i + 2] + cost[i]);
		return min(tab[0], tab[1]);
	}
};

void solve()
{
	Solution s1;
	int n, i;
	cin >> n;
	vector<int> cost(n);
	loop(i, 0, n)
	cin >> cost[i];
	log(s1.minCostClimbingStairs(cost));

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



