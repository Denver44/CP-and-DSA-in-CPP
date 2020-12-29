#include <bits/stdc++.h>
using namespace std;
#define log(a) cout << (a) << endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define looprev(i, a, b) for (int i = a - 1; i >= b; i--)

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
	int pivotIndex(vector<int> &nums)
	{

		int totsum = accumulate(nums.begin(), nums.end(), 0);
		int n = nums.size();
		int leftsum = 0;
		int rightsum = 0;
		for (int i = 0; i < n; ++i)
		{
			rightsum = totsum - nums[i];

			if (leftsum * 2 == rightsum)
				return i;
			leftsum += nums[i];
		}

		return -1;

	}
};
void solve()
{
	vector<int> arr;
	arr.push_back(7);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(3);
	arr.push_back(3);
	arr.push_back(3);
	Solution s1;
	int a = s1.pivotIndex(arr);
	log(a)
}

int main()
{
	file_i_o();
	int t = 1;
	// cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;
}
