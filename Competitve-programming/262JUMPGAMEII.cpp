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
// using Dynmaic Programming solved this question by taking a array of size n and filling the array from reverse order.
// as for the last element we need zero jump and for n-1 we will take the min jump from n-1 to n and our answer will be stored at arr[0];
// Time Complexity is O(N^2);
// Space Complexity is O(N);

class Solution {
public:
	int jump(vector<int>& nums) {
		int n = nums.size();
		int *minJump = new int[n];
		minJump[n - 1] = 0;

		for (int i = n - 2 ; i >= 0 ; i--)
		{
			int steps = nums[i];
			if (steps  == 0)
			{
				minJump[i] = INT_MAX;
			}
			else
			{
				int jump = INT_MAX;
				for (int j = 1; j <= steps && i + j < n ; j++)
				{
					jump = min(jump, minJump[i + j]);

				}
				if (jump == INT_MAX)
				{
					minJump[i] = INT_MAX;
				}
				else
				{
					minJump[i] = jump + 1;
				}
			}


		}
		return minJump[0];
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
	log(s1.jump(v));

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

