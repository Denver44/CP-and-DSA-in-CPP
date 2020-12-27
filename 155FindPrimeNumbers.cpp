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

vector<int> primeNumbersTillN(int N)
{
	vector<bool>isthisPrimeNumber(N + 1, true);
	for (int i = 2; i * i <= N; ++i)
	{
		if (isthisPrimeNumber[i])
			for (int j = i * 2; j <= N; j += i)
				isthisPrimeNumber[j] = false;
	}
	vector<int> ans;
	for (int i = 2; i <= N; ++i)
	{
		if (isthisPrimeNumber[i] == true)
			ans.push_back(i);
	}
	return ans;
}


void solve()
{
	int n; cin >> n;
	vector<int> output = primeNumbersTillN(n);
	for (int i = 0; i < output.size(); ++i)
	{
		cout << output[i] << " ";
	}

}

int main()
{
	file_i_o();
	int t = 1;
	// cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
		return 0;
	}
}