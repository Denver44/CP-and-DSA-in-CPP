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

class Solution {
public:
	int getMinDiff(int arr[], int n, int k) {
		sort(arr, arr + n);
		int min_elem , max_elem, ans = arr[n - 1] - arr[0];
		for (int i = 1; i <= n - 1; ++i)
		{
			if (arr[i] >= k)
			{
				max_elem = max(arr[i - 1] + k, arr[n - 1] - k);
				min_elem = min(arr[0] + k, arr[i] - k);
				ans = min(ans, max_elem - min_elem);
			}
			else continue;
		}
		return ans;
	}
};

void solve()
{
	int k; cin >> k;
	int n; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	Solution s1;
	int ans = s1.getMinDiff(arr, n, k);
	log(ans);

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

