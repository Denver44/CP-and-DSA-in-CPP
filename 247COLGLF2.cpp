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
	ll noSeasons, totalWatchTime = 0;
	cin >> noSeasons;
	vector<ll> durationIntoSong;
	for (int i = 0; i < noSeasons; ++i)
	{
		ll a; cin >> a;
		durationIntoSong.push_back(a);
	}
	for (int i = 0; i < noSeasons; ++i)
	{
		ll totalEpisode;
		cin >> totalEpisode;
		for (int j = 0; j < totalEpisode; ++j)
		{
			ll a; cin >> a;
			totalWatchTime += a;
		}
		totalWatchTime -= ((totalEpisode - 1 ) * durationIntoSong[i]);
	}
	log(totalWatchTime);
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
