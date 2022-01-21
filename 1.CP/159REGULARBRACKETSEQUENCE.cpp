#include <bits/stdc++.h>
using namespace std;
#define log(a) cout << (a) << endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<ll>
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define looprev(i, a, b) for (int i = a; i >= b; i--)

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
//  Simple problem Here there will be Only one charcter of ( and ) and rest all will be ??
// So we have to tell that we can make it the given string as right bracket sequence or not. by replacing the ? with ( or ).
// so if the ?? are odd in size and if at index zero of string there is ) and at the last index of the string ( then we can make it a RBS.
// Else true.
void solve()
{
	string s;
	cin >> s;
	if (s.size() % 2 == 1 || s[0] == ')' || s[s.size() - 1] == '(')
	{
		log("NO")
	}
	else
		log("YES");
}

int main()
{
	file_i_o();
	int t = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
		solve();
	return 0;
}
