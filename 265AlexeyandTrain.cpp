#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
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
// It is simple Implementation based Question.
// We have to print the arrival time for the last station


void solve()
{
	ll n;
	cin >> n;
	vector<ll> A(n + 1), B(n + 1), tm(n);
	A[0] = B[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> A[i] >> B[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> tm[i];
	}

	ll arrival = 0, previousDeparture = 0;

	for (int i = 1; i <= n; ++i)
	{
		int traveltime = abs(A[i] - B[i - 1]);
		arrival =  previousDeparture +  traveltime + tm[i - 1];

		int wait = abs(A[i] - B[i]);
		wait = (double)ceil(wait / 2.00); // Least time train should stand at station before departure.

		previousDeparture = arrival + wait;
		previousDeparture = max(previousDeparture, B[i]);
	}
	log(arrival);

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
