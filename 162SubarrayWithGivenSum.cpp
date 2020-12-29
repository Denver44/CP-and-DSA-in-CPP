#include <bits/stdc++.h>
using namespace std;
#define log(a) cout<<(a)<<endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<int>
#define loop(i,a,b) for(int i = a; i < b; i++)
#define looprev(i,a,b) for(int i = a-1; i >=b; i--)


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


/*
    Time Complexity : O(N)
    Space Complexity : O(N)

    Where N is the number of elements in the array.
*/

// vector<int> subarraySum(vector<int> &arr, long long sum)
// {

// 	int n = arr.size();
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int tot = 0;
// 		for (int j = i; j < n; ++j)
// 		{
// 			tot += arr[j];
// 			if (tot == sum)
// 				return {i, j};
// 		}
// 	}
// 	return {-1, -1};
// }

// ---------------- HASHMAP APPROACH -----------------------

vector<int> subarraySum(vector<int> &arr, long long sum) {

	int n = arr.size();
	unordered_map<int, int> map1;
	int currentsum = 0;
	for (int i = 0; i < n; ++i)
	{
		currentsum += arr[i];
		log(currentsum)
		if (currentsum == sum)
			return {0, i};
		if (map1.count(currentsum - sum))
		{
			return {map1[currentsum - sum] + 1, i};
		}
		map1[currentsum] = i;
	}
	return { -1, -1};
}
void solve()
{
	int n; cin >> n;
	long long target ; cin >> target;
	vector<int> sum(n);
	for (int i = 0; i < n ; i++)
		cin >> sum[i];

	vector<int> ans = subarraySum(sum, target);
	log(ans[0])
	log(ans[1])
}

int main()
{
	file_i_o();
	int t = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;

}

