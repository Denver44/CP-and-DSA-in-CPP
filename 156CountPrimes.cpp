
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
		if (n == 0 || n == 1) // if 0 and 1 is Not Prime Number
			return 0;
		vector<bool>prime(n, true);
		int count = 0;
		for (int i = 2; i < n; i++)
		{
			if (prime[i])
			{	count++;
				for (int j = i * 2; j < n; j += i) // for every multiple of i we make it false.
					prime[j] = false;
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