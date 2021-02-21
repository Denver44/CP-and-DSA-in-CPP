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

// Here the highest number is 10e9 and say let b the lowest will be 2 so for that also there will be only max 30 opertaion to make a Zero.

// Using Recursive way
map<pair<int, int>, int> memo;
int helper(int a, int b, int limit) {
	pair<int, int> m (a, b);
	if (a == 0)
		return 0;
	if (b == limit)
		return 30;
	if (memo.find(m) != memo.end())
		return memo[m];

	return memo[m] = min(helper(a / b, b, limit) + 1,  helper(a, b + 1, limit) + 1);
}

void solve()
{

	int a, b;
	cin >> a >> b;
	if (b > a) {
		log(1);
	}
	else if (b == a) {
		log(2);
	}
	else {
		int c = 0;
		if (b == 1)
		{
			b++;
			c++;
		}
		cout << c + helper(a, b, b + 10) << endl;
	}
}



// Iterative M
void solve2()
{
	int a, b;
	cin >> a >> b;
	int ans = INT32_MAX;
	int inc = 0;
	if (b == 1)
	{
		b++;
		inc++;
	}

	for (int i = 0; i < 30; ++i)
	{
		int x = a;
		int y = b + i;
		int count = i ;
		while (x > 0)
		{
			x /= y;
			count++;
		}
		ans = min(ans, count + inc);
	}
	log(ans);
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
