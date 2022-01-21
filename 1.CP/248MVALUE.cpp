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

	ll n;
	cin >> n;
	vector<ll> arr;
	for (int i = 0; i < n; ++i)
	{
		ll a; cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());

	ll lowest1 = arr[0], lowest2 = arr[1];
	ll highest1 = arr[arr.size() - 1], highest2 = arr[arr.size() - 2];

	ll highestSum = (highest1 * highest2) + max(highest1 - highest2, highest2 - highest1);
	ll lowestSum = (lowest1 * lowest2) + max(lowest1 - lowest2, lowest2 - lowest1);

	if (highestSum > lowestSum) {
		log(highestSum);
	}
	else {
		log(lowestSum);
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
