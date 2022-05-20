#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

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

// In this we havt to just say true or false that is there any subset present which sum can make the target.
// Here we make A 2D Array.

bool targetSumSubset(vector<vector<bool>> &dp, vector<int> &values, int target)
{
    int row = dp.size(), col = dp[0].size();
    int i;
    loop(i, 0, row) // as here we want to make Zero so using and Empty Subset we can Make 0.
        dp[i][0] = true;

    for (int i = 1; i < row; ++i)
    {
        for (int j = 1; j < col; ++j)
        {
            if (dp[i - 1][j] == true)
                dp[i][j] = true;
            else
            {
                int newj = j - values[i - 1];
                if (newj < 0 || newj >= col)
                {
                    dp[i][j] = false;
                }
                else if (dp[i - 1][newj] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
    }

    return (dp[row - 1][target] == true) ? true : false;
}

void solve()
{
    int size, target;
    cin >> size;
    v arr(size);
    for (auto &i : arr)
        cin >> i;
    cin >> target;

    vector<vector<bool>> dp(size + 1, vector<bool>(target + 1, false));

    log(targetSumSubset(dp, arr, target));
}

int main()
{
    file_i_o();
    int t = 1, i = 0;
    loop(i, 0, t)
        solve();
    return 0;
}
