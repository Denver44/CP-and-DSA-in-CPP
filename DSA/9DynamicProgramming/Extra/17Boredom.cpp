#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> A)
{
    vector<int> freq(1001, 0);
    for (int i = 0; i < n; i++)
        freq[A[i]]++;

    vector<int> dp(1001, 0);
    dp[0] = 0;
    dp[1] = freq[1];
    for (int i = 2; i <= 1000; i++)
    {
        dp[i] = max((i * freq[i]) + dp[i - 2], dp[i - 1]);
    }

    return dp[1000];
}
int n;
vector<int> A;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    cout << solve(n, A) << endl;
}