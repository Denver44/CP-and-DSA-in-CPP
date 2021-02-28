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
vector<bool> prime;
void primeCalc(ll x)
{
	for (int i = 2; i <= x; ++i)
	{
		if (prime[i])
		{
			for (int j = i * 2 ; j <= x ; j += i)
			{
				prime[j] = false;
			}
		}
	}

}
void solve()
{

	int l, r;
	cin >> l >> r;
	for (int i = r + 1; i < 10000100; ++i)
	{
		if (prime[i] == true)
		{
			log(i);
			return;
		}
	}

}
int main()
{
	file_i_o();
	int t = 1;
	cin >> t;
	prime.assign(10000100, true);
	primeCalc(10000100);
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;
}
