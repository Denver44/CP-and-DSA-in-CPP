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
// We have used the bruteForce Approach here as here the n is 1000 thats why we can use brute force.
// we have used multiset so itmes are in sorted order.


void solve()
{

	int n;
	cin >> n;
	vector<pair<int, int>> ans(n);
	vector<int> arr;
	multiset<int> s1;
	for (int i = 0; i < 2 * n; ++i)
	{
		int a; cin >> a;
		arr.push_back(a);
	}
	int cnt = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < 2 * n - 1; ++i)
	{
		s1.clear();
		for (int j = 0; j < 2 * n; ++j)
		{
			s1.insert(arr[j]);
		}

		int x = arr[2 * n - 1];
		s1.erase(s1.find(arr[i])); // index
		s1.erase(s1.find(x)); // Last
		cnt = 0;
		ans[cnt++] = {x , arr[i]};
		for (int j = 0; j < n - 1; ++j) // as we remove the elements by everytime 2 so thats why this loop run for n-1.
		{
			int temp = *prev(s1.end());// we alawsy take the bigger element as bigger elements are at the end.
			s1.erase(s1.find(temp));
			if (s1.find(x - temp) != s1.end())
			{
				s1.erase(s1.find(x - temp));
				ans[cnt++] = {temp, x - temp};
				x = temp;

			}
			else
			{

				break;
			}
		}
		if (cnt == n) break;

	}
	if (cnt == n)
	{
		log("YES");
		log(ans[0].first + ans[0].second);
		for (auto i : ans)
		{
			cout << i.first << " " << i.second << endl;
		}
	}
	else
	{
		log("NO")
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


