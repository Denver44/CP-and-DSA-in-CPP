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
	int n, a;
	cin >> n;
	map<int, int> m1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		m1[a]++;
	}
	if ((1 * m1[1]) == (2 * m1[2]))
	{log("YES");}
	else if (m1[1] % 2 == 0 &&  m1[2] % 2 == 0 )
	{log("YES");}
	else if (m1[1] == 0 && m1[2] % 2 == 0)
	{log("YES");}
	else if (m1[2] == 0 && m1[1] % 2 == 0)
	{log("YES");}
	else if ( (n % 2 == 1 ) && m1[1] != 0 && m1[2] != 0 && (m1[1] + 2 * m1[2]) % 2 == 0)
	{log("YES");}
	else
	{log("NO");}
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
