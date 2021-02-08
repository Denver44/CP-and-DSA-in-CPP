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
	string s, news = "";
	cin >> s;
	char ch;

	for (int i = 0; i < s.size(); ++i)
	{
		if (i % 2 == 0)
		{
			if (s[i] == 'a')
				news += "b";
			else
				news += "a";
		}
		else
		{

			if (s[i] == 'z')
				news += "y";
			else
				news += "z";
		}
	}
	log(news);
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


