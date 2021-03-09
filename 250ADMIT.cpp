#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("output.txt", "w", stdout);
#endif
}

// Codechef Div3 College Admission Problem

void solve()
{
	ll n, m;
	cin >> n >> m;
	vector< int> c_rank(n + 1), s_rank(m + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> c_rank[i];
	}
	for (int i = 1; i <= m; ++i)
	{
		cin >> s_rank[i];
	}

	auto comp = [&](int a, int b) {
		return c_rank[a] < c_rank[b];
	};

	vector<vector<int>> app(m + 1);
	for (int i = 1 ; i <= m ; i++)
	{
		int k; cin >> k;
		vector<int> id(k);
		for (int j = 0; j < k; ++j)
		{
			cin >> id[j];
		}
		sort(id.begin(), id.end(), comp);
		app[i] = id;
	}

	auto comp2 = [&](int a, int b) {
		return s_rank[a] < s_rank[b];
	};

	vector<int> rank_wise_index(m), alloted(n + 1, 0);

	for (int i = 1; i <= m; ++i)
	{
		rank_wise_index[i - 1] = i;
	}

	sort(rank_wise_index.begin(), rank_wise_index.end(), comp2);

	int found = 0;
	for (int i = 1; i <= m; ++i)
	{
		int s_id = rank_wise_index[i - 1];
		for (int j = 0; j < app[s_id].size(); ++j)
		{
			int college_id = app[s_id][j];
			if (alloted[college_id] == 0)
			{
				if (s_id == 1)
				{
					cout << college_id << endl;
					return;
				}
				alloted[college_id] = 1;
				break;
			}
		}
	}

	if (found == 0)
	{
		log(-1);
		return;
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

