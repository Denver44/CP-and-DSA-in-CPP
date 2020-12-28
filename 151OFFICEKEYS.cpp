#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
	ll n, k, office;
	cin >> n >> k >> office;
	vector<ll> people(n);
	vector<ll> keys(k);
	for (auto &i : people)
		cin >> i;
	for (auto &i : keys)
		cin >> i;
	sort(people.begin(), people.end());
	sort(keys.begin(), keys.end());
	ll minTime = INT32_MAX;
	for (int i = 0; i <= k - n; ++i)
	{
		ll ans = 0;
		for (int j = 0; j < n; ++j)
		{
			ans = max(ans, abs(people[j] - keys[j + i]) + abs(office - keys[j + i]));
		}
		minTime = min(ans, minTime);
	}
	cout << minTime << endl;
}

int main()
{
	file_i_o();
	int t = 1;
	// cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
		return 0;
	}
}