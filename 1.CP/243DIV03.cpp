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
	ll arr[11];
	ll k;
	for (int i = 1; i <= 10; ++i)
	{
		ll a; cin >> a;
		arr[i] = a;
	}
	cin >> k;

	for (int i = 10; i >= 1; --i)
	{
		if (arr[i] == 0) {
			continue;
		}
		if ( arr[i] <= k && k > 0)
		{
			if (k - arr[i] >= 0)
			{
				k = k - arr[i];
				arr[i] = 0;
			}
		}
		else {
			log(i);
			break;
		}
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
