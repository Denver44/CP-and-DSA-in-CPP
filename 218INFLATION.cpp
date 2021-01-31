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
	long double k;
	cin >> n >> k;
	long double  arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	long double s1 = 0.0;
	long double s2 = 0.0;

	for (int i = 1; i < n; ++i)
	{
		s2 = s2 + arr[i - 1];
		s1 = s1 + arr[i - 1];
		if ((arr[i] / s1) > (k / 100.0)) {
			long double s = (arr[i] * (1.0 * 100)) /  k - s1;
			s = ceil(s);
			s1 = s1 + s;
		}

	}
	log((long long int)(s1 - s2));
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
