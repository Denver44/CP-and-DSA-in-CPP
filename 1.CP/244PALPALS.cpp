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
void solve()
{
	map<char, int> map1;
	int helper = 0, singlechar = 0;
	string s;
	cin >> s;
	if (s.size() == 1 ) {
		log("NO")
		return;
	}
	for (int i = 0; i < s.size(); ++i)
	{
		map1[s[i]]++;
	}

	for (auto i : map1)
	{
		if (i.second % 2 == 0)
		{
			helper += (i.second / 2);
		} else {
			if (i.second > 3) {
				helper += ((i.second / 2) - 1);
			}
			else if (i.second == 1)
			{
				singlechar++;
			}
		}
	}
	singlechar -= (helper);
	if (singlechar <= 0) {
		log("YES")
	}
	else {
		log("NO");
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
