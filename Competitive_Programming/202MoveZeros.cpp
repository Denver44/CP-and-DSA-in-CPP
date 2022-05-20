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
// Using Quick sort pivot index Technique.

class Solution {
public:
	void moveZeroes(vector<int>& nums) {

		int j = 0, i = 0;

		while (i < nums.size())
		{
			if (nums[i] == 0) {
				i++;
			}
			else {
				swap(nums[i++] , nums[j++]);
			}
		}
	}
};
void solve()
{

	vector<int> arr = { 1, 1, 0, 8, 8, 9, 9};
	Solution s1;
	s1.moveZeroes(arr);
	int i;
	loop(i, 0, arr.size())
	log(arr[i])


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



