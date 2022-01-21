#include <bits/stdc++.h>
#include <cmath>
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
	int n, k, solved = 0, bot = 0, tooslow = 0, a;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a != -1)
			solved++;
		if (a == 0 || a == 1)
			bot++;
		if (a > k)
			tooslow++;
	}


	if (solved < (double)ceil(n / 2.0)) {
		log("Rejected");
	}
	else if ((solved == bot) && (solved == n)) {
		log("Bot");
	}
	else if (tooslow >= 1)  {
		log("Too Slow");
	} else {
		log("Accepted");
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


