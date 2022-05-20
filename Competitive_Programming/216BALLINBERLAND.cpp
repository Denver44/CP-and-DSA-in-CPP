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
	int a, b, k;
	cin >> a >> b >> k;
	vector < pair<int, int>> dance(k);
	vector<int> boys(a + 1);
	vector<int> girls(b + 1);
	for (int i = 0; i < k; ++i)
	{
		int x;
		cin >> x;
		dance[i].first = x;
		boys[x]++;
	}
	for (int i = 0; i < k; ++i)
	{
		int x;
		cin >> x;
		dance[i].second = x;
		girls[x]++;
	}
	ll ans = 0;
	for (int i = 0; i < k; ++i)
	{
		ans +=  (k - 1) - (boys[dance[i].first] - 1) - (girls[dance[i].second] - 1) ;
	}
	log(ans / 2);

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