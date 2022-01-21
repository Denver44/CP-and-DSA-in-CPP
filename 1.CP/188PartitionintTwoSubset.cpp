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
// We have use Target Sum here Only.
// Here we have given an array we have to return true / false wheather we can do partition this array inb a equal subset or not.
// So what we did we take out the sum and if the sum is odd then its CS we cannot parition of the array in two equal halves.
// If ist even we can do so here we use 2D Matrix and we send the target values as half od the total sum .
// If that tab[n][target] return true it means we can make eg if sum is 22 and it half is 11 and we can make 11 by using array 5 5 1 11 that means we can make one more eleven.

class Solution {
public:
	bool helper(vector<int>& nums , int target, int n)
	{

		vector<vector<bool>> tab(n + 1, vector<bool>(target + 1, false));
		tab[0][0] = true;
		for (int i = 0; i <= n; ++i)
			tab[i][0] = true;

		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= target; ++j)
				if (j >= nums[i - 1]) // He can only bat if the score is more than he Usually Score so at that time we check two condition if earlier team already scored then no need to bat just return true and put the score they till that otherwise subtrat his usally score with team total and check can rest of people do this or not.
					tab[i][j] = (tab[i - 1][j] || tab[i - 1][j - nums[i - 1]]);
				else
					tab[i][j] = tab[i - 1][j]; // This time just enter their score only.
		return tab[n][target];
	}
	bool canPartition(vector<int>& nums) {

		int sum = accumulate(nums.begin(), nums.end(), 0);
		int n = nums.size();
		if (sum % 2 != 0)
			return false;
		return helper(nums, sum / 2, n);

	}
};

void solve()
{
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	Solution s1;
	log(s1.canPartition(arr));
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
