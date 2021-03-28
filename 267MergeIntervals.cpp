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

// O(N) time Complexity;

class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {

		vector<vector<int>> output;
		if (intervals.size() <= 0) // if size is 0 then return empty array
			return output;

		sort(intervals.begin(), intervals.end()); // Sorted the array First


		vector<int> temp = intervals[0]; // created a temp array and inserted first element in it.
		for (auto it : intervals)
		{
			if (it[0] <= temp[1]) // if starting is less then previous ending
				temp[1] = max(it[1], temp[1]); // update the highest ending point;
			else
			{
				output.push_back(temp);
				temp = it; // now take new intervals after pushing in vector.
			}
		}

		output.push_back(temp);
		return output;
	}
};


void solve()
{



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
