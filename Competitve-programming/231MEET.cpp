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

int  helper2( char a, char b , char c , char d )
{
	return  (1000 * (a - '0') + (100 * (b - '0') ) + (10 * (c - '0')) + (d - '0'));
}

void solve()
{
	int n;
	string p, s;
	cin >> p >> s;
	int	officalTime;
	if (s == "AM") {
		if (p[0] == '1' && p[1] == '2')
		{
			officalTime = helper2(p[0], p[1], p[3], p[4]) - 1200 ;
		}
		else
		{
			officalTime = helper2(p[0], p[1], p[3], p[4]);
		}
	}
	else {
		if (p[0] == '1' && p[1] == '2')
		{
			officalTime = helper2(p[0], p[1], p[3], p[4]) ;
		}
		else
		{
			officalTime  = helper2(p[0], p[1], p[3], p[4]) + 1200 ;
		}
	}
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string p, s;
		cin >> p >> s;
		int	starttime;
		if (s == "AM") {
			if (p[0] == '1' && p[1] == '2')
			{
				starttime  = helper2(p[0], p[1], p[3], p[4])  - 1200 ;
			}
			else
			{
				starttime = helper2(p[0], p[1], p[3], p[4]);
			}
		}
		else {
			if (p[0] == '1' && p[1] == '2')
			{
				starttime = helper2(p[0], p[1], p[3], p[4]);
			}
			else
			{
				starttime = helper2(p[0], p[1], p[3], p[4]) + 1200 ;
			}
		}


		cin >> p >> s;
		int	desttime;
		if (s == "AM") {
			if (p[0] == '1' && p[1] == '2')
			{
				desttime = helper2(p[0], p[1], p[3], p[4]) - 1200 ;
			}
			else
			{
				desttime = helper2(p[0], p[1], p[3], p[4]);
			}
		}
		else {
			if (p[0] == '1' && p[1] == '2')
			{
				desttime = helper2(p[0], p[1], p[3], p[4]);
			}
			else
			{
				desttime = helper2(p[0], p[1], p[3], p[4]) + 1200 ;
			}
		}


		if (starttime <= officalTime && desttime >= officalTime)
			cout << 1;
		else
			cout << 0;
	}
	cout << endl;

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