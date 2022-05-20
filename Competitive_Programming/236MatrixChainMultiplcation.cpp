#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<int>
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
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

// Using gap stratergy solving this problem.

int matrixChainMultiplication(int* arr, int n) {

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int g = 0; g < n; ++g)
    {
        for (int i = 0, j = g; j < n; ++i, ++j)
        {
            if (g == 0)
            {
                continue;
            }
            else if (g == 1)
            {
                dp[i][j] = arr[i] * arr[j] * arr[j + 1];
            }
            else
            {
                int minValue = INT32_MAX;
                int k = i;
                while (k < j) {
                    int left = dp[i][k];
                    int right = dp[k + 1][j];
                    int cost = arr[i] * arr[k + 1] * arr[j + 1];
                    minValue = min(minValue , left + right + cost);
                    k++;
                }

                dp[i][j] = minValue;
            }
        }
    }

    return dp[0][n - 1];
}

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << matrixChainMultiplication(arr, n - 1);
}
int main()
{
    file_i_o();
    solve();
    return 0;
}

