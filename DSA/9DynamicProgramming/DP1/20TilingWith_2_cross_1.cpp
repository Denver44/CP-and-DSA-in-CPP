#include <iostream>
using namespace std;

// if there only one tile then it can fit only one way.
// if there is two tiles then it can be fit vertically and horizontally also. thats why 2.

int main()
{
    int n;
    cin >> n;
    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];

    return 0;
}
