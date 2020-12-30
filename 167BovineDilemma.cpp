#include <bits/stdc++.h>
using namespace std;
#define log(a) cout<<(a)<<endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<int>
#define loop(i,a,b) for(int i = a; i < b; i++)
#define looprev(i,a,b) for(int i = a-1; i >=b; i--)


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
	int n; cin >> n;
	set<double> s1;
	v cordinates(n);
	int i = 0;
	loop(i , 0 , n)
	cin >> cordinates[i];
	int a = 0 , b = 0;
	loop(a, 0, n - 1)
	loop(b, a + 1, n)
	s1.insert(double(cordinates[a] - cordinates[b]) / 2);
	log(s1.size());
	return;

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

