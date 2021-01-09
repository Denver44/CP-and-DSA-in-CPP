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
// Using Recursion we Solve the Genrate Parenthessis
// Here we Know that for a valid Parthensis the Open ( must be qual to  close ).
// Using this We solve the problem
// Base Condition as soon as we the length string reach double of n then return.
class Solution {
public:

	void helper(int n, int open , int close , string psf, vector<string> &ans)
	{
		if (psf.size() == n * 2) {
			ans.push_back(psf);
			return;
		}
		if (open < n)
			helper(n, open + 1, close, psf + "(" , ans);
		if (close < open)
			helper(n, open, close + 1, psf + ")" , ans);

	}
	vector<string> generateParenthesis(int n) {

		vector<string> ans;
		helper(n, 0, 0, "", ans);
		return ans;
	}
};



void solve()
{
	Solution s1;
	vector<string> s2;
	s2 = s1.generateParenthesis(3);
	int i;
	loop( i, 0, s2.size())
	log(s2[i]);


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


