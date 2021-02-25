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
bool cmp(pair<int, int> a,
         pair<int, int> b)
{
	if (a.second <= b.second) return true;
	if (a.second == b.second && a.first > b.first) return true;
	return false;
}

void solve()
{
	int n; cin >> n;
	vector<pair<int, int>> patients;
	for (int i = 0; i < n; ++i)
	{
		int a; cin >> a;
		patients.push_back({i, a});
	}
	sort(patients.begin(), patients.end(), cmp);
	vector<int> ans(n + 1);
	int score = n;
	for (int i = 0 ; i < n; i++)
	{
		ans[patients[i].first] = score--;
	}
	for (int i = 0 ; i < n; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
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

