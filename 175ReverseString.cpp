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
	void reverseString(vector<char>& s) {

		int i = 0, j = s.size() - 1;
		while (i < j)
			swap(s[i++], s[j--]);


	}
};


void solve()
{
	Solution s1;
	vector<char> s;
	s.push_back('d');
	s.push_back('u');
	s.push_back('r');
	s.push_back('g');
	s.push_back('e');
	s.push_back('s');
	s.push_back('h');
	s1.reverseString(s);
	for (auto i : s)
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
