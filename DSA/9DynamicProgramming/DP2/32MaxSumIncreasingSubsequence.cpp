#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[n];
    int ovvmax = arr[0];
    dp[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        int maxx = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] <= arr[i])
            {
                if (dp[j] > maxx)
                {
                    maxx = dp[j];
                }
            }
        }
        dp[i] = arr[i] + maxx;
        if (dp[i] > ovvmax)
        {
            ovvmax = dp[i];
        }
    }

    cout << ovvmax;

    return 0;
}