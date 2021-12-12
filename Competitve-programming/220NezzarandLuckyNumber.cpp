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

// Nezzar's favorite digit among 1,…,9 is d. He calls a positive integer lucky if d occurs at least once in its decimal representation.

void solve()
{
	int n, d, a;
	cin >> n >> d;

	if (d == 1)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			log("YES");
		}
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			bool flag = false;
			if (a >= d * 10) {
				flag = true;
				log("YES");
			}
			else
			{
				while (a  > 0)
				{
					a -= d;
					if (a % 10 == 0) {
						flag = true;
						log("YES");
						break;
					}
				}
			}
			if (flag == false) {
				log("NO");
			}
		}
	}
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