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

// Using Simple XOR PROPERTY
// if we take xor of 0 ^ 6 we will get 6 and if we XOR 6 ^ 6 = 0
class Solution {
public:
	int singleNumber(vector<int>& nums) {

		int val = 0;

		for (int i = 0; i < nums.size() ; i++)
		{
			val ^= nums[i];
		}

		return val;

	}
};


void solve()
{

	vector<int> arr = { 1, 1, 20000, 8, 8, 9, 9};
	Solution s1;
	log(s1.singleNumber(arr));

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



