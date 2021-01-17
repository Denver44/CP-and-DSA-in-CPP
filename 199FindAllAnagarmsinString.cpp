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
//Here we have to find the anagarm in the string using Hashmap we can easily find the solution.
// Using Acauire and Realse method.
// Time Complexity = P + 26S = O(P + S)
// Space Complexity = 26 + 26 = O(1)


class Solution {
public:
	bool helper( unordered_map<char, int> &s, unordered_map<char, int> &p)
	{
		for (auto i : s)
		{
			if (s[i.first] != p[i.first] )
				return false;
		}
		return true;

	}
	vector<int> findAnagrams(string s, string p) {

		vector<int> ans;
		unordered_map<char, int> pattern, source;
		for (int i = 0; i < p.size(); ++i) // p length()
		{
			pattern[p[i]]++;
		}
		int j = 0, i = 0;
		for (; j < p.size(); ++j)
		{
			source[s[j]]++; // Acquire
		}
		while (j < s.length()) // slength()
		{
			if (helper(source, pattern)) {
				ans.push_back(i); // 2.Compare
			}

			source[s[j]]++; // 3.Acquire

			if (source[s[i]] == 1) // 4. Realse from start.
				source.erase(s[i]);
			else
				source[s[i]]--;
			i++;
			j++;

		}

		if ( helper(source, pattern)) {
			ans.push_back(i);
		}

		return ans;


	}
};



void solve()
{

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



