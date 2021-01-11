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
// Here we have two choose houses which are not adjacent to each other so we used this technique of include and Exclude.


class Solution {
public:
	int rob(vector<int>& nums) {

		int exclude = 0, include = 0;
		int size = nums.size();
		for (int i = 0; i < size ; i++)
		{
			int newinclude = exclude + nums[i];
			int newexclude = max(exclude, include);
			include = newinclude;
			exclude = newexclude;
		}
		return max(include, exclude);

	}
};


void solve()

{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(100);
	Solution s1;
	log(s1.rob(arr));
}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	loop (i, 0, t)
	solve();
	return 0;
}



