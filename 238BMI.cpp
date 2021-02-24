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
	int m, h;
	cin >> m >> h;
	int ans = m / (h * h);
	if (ans <= 18) {
		log(1);
		return;
	} else if (ans > 18 && ans <= 24) {
		log(2);
		return;
	} else if (ans >= 25 && ans <= 29) {
		log(3);
		return;
	}
	else {
		log(4);
		return;
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

