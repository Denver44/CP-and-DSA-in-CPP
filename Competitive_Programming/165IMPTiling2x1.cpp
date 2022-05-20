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

int numberOfWaysToTile(long long n)
{
	const long M = 1e9 + 7;
	if (n == 1 || n == 2)
		return n;

	long long oldsum = 1;
	long long newsum = 2;
	long long newset = 0;
	for ( long long i = 3; i <= n; i++)
	{
		newset = (oldsum + newsum) % M;
		oldsum = newsum;
		newsum = newset;
	}
	return newset;

}

void solve()
{

	cout << numberOfWaysToTile(3);

}

int main()
{
	file_i_o();
	int t = 1;
	// cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();

	}
	return 0;
}

// ------------------------ FOR N greater than 10^8 we have to use this approach --------------

// /*
//     Time Complexity : O(log(N))
//     Space Complexity : O(log(N))

//     Where 'N' is the number of columns in the board.
// */

// #define MOD 1000000007

// void multiply(long long F[2][2], long long M[2][2])
// {
//     /*
//         Logic for Multiplication of Matrix 'F' and Matrix 'M'
//     */

//     long long x = (F[0][0] * M[0][0]) % MOD + (F[0][1] * M[1][0]) % MOD;
//     long long y = (F[0][0] * M[0][1]) % MOD + (F[0][1] * M[1][1]) % MOD;
//     long long z = (F[1][0] * M[0][0]) % MOD + (F[1][1] * M[1][0]) % MOD;
//     long long w = (F[1][0] * M[0][1]) % MOD + (F[1][1] * M[1][1]) % MOD;

//     F[0][0] = x % MOD;
//     F[0][1] = y % MOD;
//     F[1][0] = z % MOD;
//     F[1][1] = w % MOD;
// }

// void power(long long F[2][2], long long n)
// {
//     /*
//         Binary Matrix Exponentiation
//     */

//     if (n == 0 || n == 1)
//         return;
//     long long M[2][2] = {{1, 1}, {1, 0}};

//     power(F, n / 2);
//     multiply(F, F);

//     if (n & 1)
//         multiply(F, M);
// }

// int fib(long long n)
// {
//     long long F[2][2] = {{1, 1}, {1, 0}};
//     if (n == 0)
//         return 0;
//     power(F, n - 1);

//     return F[0][0];
// }

// int numberOfWaysToTile(long long n)
// {
//     //  The no. of ways to tile (2 x N) Board is (N+1)th Fibonacci Number
//     return fib(n + 1);
// }