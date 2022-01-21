#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

// --------------- BOTTOM UP APPROACH-----------------------------------------------
// Here we have given rod for size of array and we have to cut the rod in such way that we can earn max profit.


void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = arr[0];

    // Here why we go only half of i because lets say i = 6 then (1,5)(2,4)(3,3)(4,2)(5,1)(6,0) as it repeating after half so that we go only i/2 and the last (6,0);
    for (int i = 2; i <= n; i++)
    {
        dp[i] = arr[i - 1]; // IMPORTANT STEP
        for (int j = 1; j <= i / 2; j++)
        {
            dp[i] = max(dp[i - j] + dp[j], dp[i]);
        }
    }

    log(dp[n])
}


// -------------TOP DOWN APPROACH-----------------------------------------------
int helper(int a, int *dp, int *arr)
{
    if (a == 0)
        return 0;

    if (dp[a] != 0)
        return dp[a];

    for (int i = 1; i <= a / 2; i++)
    {
        dp[a] = max(dp[a], max(arr[a - 1], dp[i] + helper(a - i, dp, arr)));
    }
    return dp[a];
}

void solve2()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *dp = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = 0;
    }
    dp[1] = arr[0];
    log(helper(n, dp, arr));
}



int main()
{

    solve();
    return 0;
}
