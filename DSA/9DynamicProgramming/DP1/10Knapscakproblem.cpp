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
#include <iostream>
#include <vector>
using namespace std;

// Here we have to put the wieghts in Bag and ist should be leass than or equal to capacity.
int knapsnack(vector<int> &weights, vector<int> &values, int capacity, int n)
{

    // We need a Columnsize of capacity.
    // And row size of Number of element.
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[0].size(); ++j)
        {
            if (j >= weights[i - 1])
                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            else
                dp[i][j] = (dp[i - 1][j]);
        }
    }

    // for (int i = 0; i < dp.size(); i++)
    // {
    // 	for (int j = 0; j < dp[0].size(); j++)
    // 	{

    // 		cout << dp[i][j] << " ";
    // 	}
    // 	cout << endl;
    // }
    return dp[n][capacity];
}

void solve()
{
    int n;
    cin >> n;
    v weights(n), values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    int capacity;
    cin >> capacity;

    log(knapsnack(weights, values, capacity, n));
}

int main()
{
    file_i_o();
    int t = 1, i = 0;
    loop(i, 0, t)
        solve();
    return 0;
}
