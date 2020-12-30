#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull ;
#define log(a) cout<<(a)<<endl;
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
	int n;
	cin >> n;
	vector<ll> arr(n);
	int i = 0;
	loop(i, 0, n)
	cin >> arr[i];
	unordered_set<long long> s1;
	int j = 0;
	loop(j, 0, n)
	if (s1.find(arr[j]) != s1.end())
		s1.insert(arr[j] + 1);
	else
		s1.insert(arr[j]);

	log(s1.size())


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

