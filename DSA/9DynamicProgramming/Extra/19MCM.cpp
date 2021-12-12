#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



int matrixChainMultiplication(int* arr, int n) {

    vector<vector<int>> dp(n,vector<int>(n));

    for (int g = 0; g < n; ++g)
    {
        for (int i = 0 ,j = g; j < n; ++i, ++j)
        {
            if (g == 0)
                dp[i][j] = 0;
            else if (g == 1) {
                dp[i][j] = arr[i] * arr[j] *arr[j+1];
            } else  {

                int minValue = INT32_MAX;
                for (int k = i; k < j; ++k)
                {
                    minValue = min(minValue, (dp[i][k] + dp[k + 1][j]) + (arr[i] * arr[k+1]* arr[j+1]) );
                }
                dp[i][j] = minValue;

            }
        }
    
    return dp[0][n-1];

}
int main()
{
    
    return 0;
}