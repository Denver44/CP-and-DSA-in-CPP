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


//------------------- Using Recursion and Dp both.----------------------
// we stored the answer in the answerBank So if we get the same Input we will return the answer from Answer Bank.
int answerBank[31] = {0};
int fib1(int N)
{
	if (N <= 1)
		return N;
	if (answerBank[N] != 0 )
		return answerBank[N];

	int ans = fib(N - 1) + fib(N - 2);
	answerBank[N] = ans;
	return ans;
}

//-------------------------- Using Dp Approach----------------
int fib2(int N)
{

	if (N <= 1)
		return N;
	int *dp = new int[N + 1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= N; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];

	return dp[N];
}
//-------------------------- Using Recursion----------------------
int fib3(int N)
{
	if (N <= 1)
		return N;
	return fib(N - 1) + fib(N - 2);
}



int main()
{
	file_i_o();
	Solution s1;
	cout << s1.fib(15);

}