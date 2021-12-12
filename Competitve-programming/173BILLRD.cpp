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
	ll n, k, x, y;
	cin >> n >> k >> x >> y;
	vector<pair<int, int>> ans;
	int times = 0;
	if (x == y)
	{
		cout << n << " " << n << endl;
		return;
	}
	else if (x > y) {
		while (times < 4 )
		{
			if (x == 0)
				swap(x, y);
			else if ( x == n) {
				swap(x, y);
			}
			else if (y == n)
			{
				y = (y - x);
				x = 0;
			}
			else
			{
				y += (n - x);
				x = n;
			}
			times++;
			ans.push_back({x, y});
		}
	}
	else  {
		while (times < 4 )
		{
			if (y == 0)
				swap(x, y);
			else if ( y == n) {
				swap(x, y);
			}
			else if (x == n)
			{
				x = x - y;
				y = 0;
			}
			else
			{
				x += (n - y);
				y = n;
			}
			times++;
			ans.push_back({x, y});
		}
	}

	int index = (k - 1) % 4;
	cout << ans[index].first << " " << ans[index].second << endl;


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

