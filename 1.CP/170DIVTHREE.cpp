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

	ll n, k, d;
	cin >> n >> k >> d;
	int sum = 0, i = 0, a;
	loop(i, 0, n) {
		cin >> a;
		sum += a;
	}
	if (sum / k >= d) {
		log(d)
	}
	else {
		log(sum / k)
	}
	return;

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t) {
		solve();
	}
	return 0;
}

