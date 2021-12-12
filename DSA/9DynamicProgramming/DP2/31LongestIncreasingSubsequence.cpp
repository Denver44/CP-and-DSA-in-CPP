#include <iostream>
#include <vector>
using namespace std;
// Sub sequnece is that i can cime or not ike for ab -- a- -b ab
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
    int ovvmax = 1;
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int maxx = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                if (dp[j] > maxx)
                {
                    maxx = dp[j];
                }
            }
        }
        dp[i] = 1 + maxx;
        if (dp[i] > ovvmax)
        {
            ovvmax = dp[i];
        }
    }

    cout << ovvmax;

    return 0;
}