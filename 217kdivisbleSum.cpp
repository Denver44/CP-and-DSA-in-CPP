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

	int n, k;
	cin >> n >> k;

	if (n == 1) {

		log(k);
		return;
	}
	else if (k == 1) {

		log(1);
		return;
	}
	else if (n == k) {
		log(1);
		return;
	}
	else if (n > k)
	{
		if (n % k == 0)
		{
			log(1)
			return;
		}
		else {
			log(2);
			return;
		}
	}
	else
	{
		if (k % n == 0)
		{
			log(k / n);
			return;
		}
		log((k / n) + 1);
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


