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
	int n;
	cin >> n;
	vector<ll > arr;
	for (int i = 0; i < n; ++i)
	{
		ll a; cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());

	ll a = arr[0], b = arr[1] , c = arr[n - 1];

	ll sum = abs(a - b) + abs(a - c) + abs(c - b);
	log(sum);

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