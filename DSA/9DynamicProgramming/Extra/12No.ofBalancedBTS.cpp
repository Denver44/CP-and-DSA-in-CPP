#include <bits/stdc++.h>
using namespace std;
const unsigned long int M = 1000000007;
// Here we have to find the total number of binary tree is possible.
// So we take product or left and right side .
int helper(int n, int *dp)
{
    if (n <= 0)
        return 1;

    if (dp[n] != 0)
        return dp[n];

    int a = (helper(n - 1, dp) % M * helper(n - 1, dp) % M) % M;
    int b = (2 * (((helper(n - 1, dp) % M) * (helper(n - 2, dp) % M)) % M)) % M;

    dp[n] = (a + b) % M;
    // Important Note whenever there is large value dont apply modulo at the end always us it at after every interval.
    return dp[n];
}

int balancedBTs(int n)
{
    int *dp = new int[n + 1];
    memset(dp, 0, sizeof(int) * n);
    dp[1] = 1;

    return helper(n, dp);
}
// -------------------------------------------Tabulation-- ----------------------------------------
int helper2(int n)
{

    unsigned long int *tab = new unsigned long int[n + 1];
    tab[0] = 1;
    tab[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        tab[i] = ((tab[i - 1] * tab[i - 1]) + (2 * (tab[i - 2] * tab[i - 1]))) % M;
    }

    return tab[n];
}

int balancedBTs(int n)
{
    return helper2(n);
}
int main()
{
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
