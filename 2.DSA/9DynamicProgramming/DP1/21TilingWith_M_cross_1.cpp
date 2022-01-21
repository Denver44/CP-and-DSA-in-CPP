#include <iostream>
using namespace std;



int main()
{
    int m, n;
    cin >> n >> m;
    int dp[n + 1];

    for (int i = 1; i <= n; i++)
    {
        if (i < m) // if we have gievn 5 * 4 and the tiles are 5*1 then only way we can put it horizontal.
        {
            dp[i] = 1;
        }
        else if (i == m) //if 5*5 area and tiltes then we can put it horizontal or vertical a tiles of 5 *1
        {
            dp[i] = 2;
        }
        else // if we put one vertical then i-1 area left and if we put on horizontal then i-m are left.
        {
            dp[i] = dp[i - 1] + dp[i - m];
            // Verical i-1 Horizontal the i-m
        }
    }
    cout << dp[n];

    return 0;
}
