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
class Solution {
public:
	string keypad[11] = {"_", "__" , "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	void helper(string digit, string psf , vector<string> &ans )
	{
		if (digit.empty())
		{
			ans.push_back(psf);
			return;
		}

		string s = keypad[digit[0] - 48];
		for (int i = 0; i < s.size(); ++i)
		{
			helper(digit.substr(1), psf + s[i], ans);

		}
	}
	vector<string> letterCombinations(string digits) {
		vector<string> ans;

		if (!digits.empty())
			helper(digits, "", ans);

		return ans;
	}
};
void solve()
{
	Solution s1;
	vector<string> ans = s1.letterCombinations("34");
	for (string i : ans)
		log(i);

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}

