#include <bits/stdc++.h>
using namespace std;
#define log(a) cout << (a) << endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<int>
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define looprev(i, a, b) for (int i = a; i >= b; i--)
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
// Amzazon SDE Asked Question
// You are given an array of integers ARR of length N and an integer Target.
// Your task is to return all pairs of elements such that they add up to Target.
// Note : We cannot use the element at a given index twice.
// So the pairs index should be also Distinct.
//  So using HashMap we can Solve this Problem Efficently. in O(N) time.
// OUTPUT : - print all pairs of elements
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int N)
{

	vector<pair<int, int>> ans;
	map<int, int> m1;
	for (int i = 0; i < arr.size(); i++)
	{
		int compliment = (target - arr[i]);
		if (m1.count(compliment))
		{
			ans.push_back({arr[i], compliment});
			if (m1[compliment] == 1) // Two remove The duplicates we decrease the count of the elemnt by -1.
				m1.erase(compliment);
			else // if it only 1 then remove it because we want disticnt pairs.
				--m1[compliment];
		}
		else
			m1[arr[i]]++;
	}

	if (ans.size() == 0)
		ans.push_back({-1, -1});
	return ans;
}

void solve()
{
	int n, target;
	cin >> n >> target;
	v arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	vector<pair<int, int>> v1 = twoSum(arr, target, n);
	for (auto i : v1)
	{
		cout << i.first << " " << i.second << endl;
	}
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
