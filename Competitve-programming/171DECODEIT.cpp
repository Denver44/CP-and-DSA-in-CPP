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
char ch[] = {'_', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
void solve()
{
	int n;
	cin >> n;
	string s; cin >> s;
	int i = 0;
	int startIndex = 1;
	int EndIndex = 16;
	string ans = "";
	loop(i, 0, n)
	{
		if ((i + 1) % 4  == 0)
		{

			if (s[i] == '1') {
				char chr = ch[EndIndex];
				string s(1, chr);
				ans += s;
			}
			else {
				char chr = ch[startIndex];
				string s(1, chr);
				ans += s;
			}
			startIndex = 1, EndIndex = 16;
			continue;
		}


		if (s[i] == '0')
			EndIndex = (startIndex + EndIndex) / 2;

		else
			startIndex = ((startIndex + EndIndex) / 2) + 1 ;
	}

	log(ans);
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

