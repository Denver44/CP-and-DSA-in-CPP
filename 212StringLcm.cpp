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
// In this we have to return a lcm of string
// So we take out the lcm by using formula (a*b)/ gcd(a,b);
// So we have get the length will be lcm.
void solve()
{
	string s, t;
	cin >> s >> t;
	if (s.size() > t.size()) swap(s, t);
	int a = s.size(), b = t.size();
	if (a == b) { // if size are same
		if (s == t) { // and they match charcter by charcater
			log(s); // then just return one fo them
		}
		else {// else lcm cannot be found so return -1
			log(-1);
		}
		return;
	}

	int lcm = (a * b) / __gcd(a, b);
	string ans = ""; // the lcm string of length lcm.
	int k = 0;
	for (int i = 0; i < lcm; ++i)
	{
		ans += s[k++];
		k %= a;

	}
	k = 0;
	for (int i = 0; i < lcm; ++i)
	{
		if (ans[i] != t[k++])
		{
			log(-1);
			return;
		}
		k %= b;

	}
	log(ans);

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

