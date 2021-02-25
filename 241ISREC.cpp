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
// Here we have to find first check in each row and each col is there is  if yes then it should contain a reactangle in which all have values 1.
// so we first out the points from where the row and col start and end in which that row or col is having 1 in it for one time.
// After then on those four cordinates we apply the for loop and check that it inner elements also there is all one or not.
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> s(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
	{
		string s1; cin >> s1;
		for (int j = 0; j < m; ++j)
		{
			if (s1[j] == '1')
				s[i][j] = 1;
		}
	}

	int up = n - 1, down = 0, left = m - 1, right = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (s[i][j])
			{
				up = min(up, i); // we get the min row where 1 is start
				down = max(down, i); // we got the max row where 1 is present
				left = min(left, j); // least col where 1 is present
				right = max(right, j); // highet col where  1 is present.
			}
		}

	}

	for (int i = up	; i <= down; ++i)
	{
		for (int j = left; j <= right; ++j)
		{
			if (s[i][j] == 0) {
				log("NO");
				return;
			}
		}
	}
	log("YES");
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

