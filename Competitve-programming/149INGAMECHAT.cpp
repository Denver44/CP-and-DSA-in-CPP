#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

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
	string s;
	cin >> s;
	// 	cout<<s<<endl;
	int paranthesis = 0;
	int charcter = 0;
	int valid = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ')')
			paranthesis++;
		else if (s[i] >= 'a' && s[i] <= 'z' || paranthesis > 0)
		{
			charcter += paranthesis;
			charcter++;
			paranthesis = 0;
		}
	}
	if (paranthesis > charcter)
		cout << "Yes" << endl;
	else
	{
		cout << "No" << endl;
	}
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


