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
	cin >> n;
	unordered_map<int, int> m1;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		m1[a]++;
	}

	if (m1.size() == 1) {
		log(n);
		return;
	}
	if (m1.size() == n) {
		log(1);
		return;
	}
	else
	{
		int a = INT_MIN;
		for (auto i : m1)
		{
			if (i.second > a)
			{
				a = i.second;
			}
		}
		log(a);
		return;

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


