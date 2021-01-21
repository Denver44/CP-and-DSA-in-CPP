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
	int n, d, i;
	cin >> n >> d;
	vector<int> arr;
	for (int i = 0; i < n; ++i)
	{
		int a; cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	bool flag = true;
	loop(i, 0, arr.size())
	{
		if (arr[i] > d) {
			flag = false;
			break;
		}

	}
	if (flag) {
		log("YES")
		return;
	}
	else
	{
		int i = 0;
		vector<int> small;
		while (arr[i] < d)
		{
			small.push_back(arr[i++]);

		}
		if (small.empty()) {
			log("NO")
			return;
		}
		for (int i = 0; i < small.size() - 1; ++i)
		{
			if (arr[i] + arr[i + 1] <= d)
			{
				log("YES");
				return;

			}

		}

	}

	log("NO");
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



