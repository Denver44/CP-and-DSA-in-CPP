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
	vector<int> ans;

	void helper(int s , int n)
	{
		if (s > n)
			return ;
		if (s <= n)
			ans.push_back(s);

		for (int i = 0 ; i < 10 ; i++)
			helper( i + (s * 10), n);
	}


	vector<int> lexicalOrder(int n) {
		for (int i = 1; i <= 9 ; i++)
			helper(i, n);
		return ans;
	}
};

void solve()
{
	Solution s1;
	v arr = s1.lexicalOrder(50);
	int i;
	loop( i, 0, arr.size())
	log(arr[i])
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


