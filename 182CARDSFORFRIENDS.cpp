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
	ll w, h, n;
	cin >> w >> h >> n;
	if (w % 2 == 1 && h % 2 == 1 && n > 1) {
		log("NO")
		return;
	}
	else if ( n == 1) {
		log("YES")
		return;
	}
	else
	{
		int countw = 1, counth = 1;
		while (h % 2 == 0 )
		{
			h /= 2;
			counth *= 2; // Everytime we get double by cutting it.
		}
		while (w % 2 == 0)
		{
			w /= 2;
			countw *= 2;
		}

		if (counth * countw >= n)
		{log("YES");}
		else
		{log("NO");}
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