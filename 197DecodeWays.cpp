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

// This is Decode ways With Tabulation.
// With 4 cases
// 1 0 0
// 2 0 1-9
// 3 1-9 0
// 4 0-9 0-9
class Solution {
public:
	int numDecodings(string s) {

		if (s.size() == 1 && s[0] == '0')
			return 0;
		vector<int> tab(s.size());
		s[0] == '0' ? tab[0] = 0 : tab[0] = 1;

		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == '0' && s[i - 1] == '0')
				tab[i] = 0;
			else if (s[i] == '0' && (s[i - 1] == '1' || s[i - 1] == '2' ))
				tab[i] = ((i >= 2) ? tab[i - 2] : 1);
			else if ((s[i] >= '1' && s[i] <= '9' ) && s[i - 1] == '0')
				tab[i] = tab[i - 1];
			else if (s[i] != '0' && s[i - 1] != '0')
			{
				string s1 = s.substr(i - 1, 2);
				int a = stoi(s1);
				if (a >= 11 && a <= 26)
				{
					tab[i] =  ((i >= 2) ? tab[i - 1] + tab[i - 2] : tab[i - 1] + 1) ;
				}
				else
					tab[i] = tab[i - 1] + 0;
			}
			else
				tab[i] = 0;

		}

		return tab[s.size() - 1];

	}
};



void solve()
{
	Solution s1;
	string s;
	cin >> s;
	log(s1.numDecodings(s));

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



