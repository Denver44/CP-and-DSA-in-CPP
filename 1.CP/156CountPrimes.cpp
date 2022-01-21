
// LeetCode Problem 204. Count Primes we have to count the nUmber of Primes Numbers Available form 0 to given Number N. The N is Exculsive.
// Using Seieve Eranthsosis Formula we Count the Number Of the Prime Number Return it.
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

class Solution
{
public:
	int countPrimes(int n)
	{
		bool *prime = new bool[n + 1];
		memset(prime, true, sizeof(bool) * n);
		int count = 0;
		for (int i = 2; i * i < n; i++)
		{
			if (prime[i] == true)
			{
				for (int p = i * i; p < n; p = p + i)
				{
					prime[p] = false;
				}
			}
		}

		for (int i = 2; i < n; i++)
		{
			if (prime[i] == true)
			{
				count++;
			}
		}

		return count;
	}
};

void solve()
{
	int n; cin >> n;
	Solution s1;
	cout << s1.countPrimes(n);

}

int main()
{
	file_i_o();
	int t = 1;
	for (int i = 0; i < t; i++)
	{
		solve();
		return 0;
	}
}