#include <iostream>
#include <vector>
using namespace std;

// In how many ways a friend can be either single or in pair.

void firendpairing(int n)
{
    int dp[n + 1];
    dp[1] = 1; // if one frined then he can only singly
    dp[2] = 2; // if two firned then they can ne single liek 1-2 or in pair 12.


    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] * (i - 1);
    }
    cout << dp[n];
}

int main()
{
    int n;
    cin>>n;
    firendpairing(n);
    return 0;
}