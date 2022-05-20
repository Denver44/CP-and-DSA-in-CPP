#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
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
// In unordered Map search, insert and delete from hash table is O(1).
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		unordered_map<int, int> m1;
		int num = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (m1.find(nums[i]) != m1.end()) {
				num = nums[i];
				break;
			}
			else
				m1[nums[i]]++;
		}
		return num;
	}
};
void solve()
{
	Solution s1;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	log(s1.findDuplicate(v));
}
int main()
{
	file_i_o();
	int t = 1;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;
}

