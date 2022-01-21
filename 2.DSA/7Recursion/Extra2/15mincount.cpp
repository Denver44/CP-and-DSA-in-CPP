#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define looprev(i, a, b) for (int i = a - 1; i >= b; i--)

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

int minCount(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    int ans = n; // We know these our answer will be at least n But we want the Min answer if it is Possible.
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i * i <= n)
        {
            // cout << "Earlier " << n << " now " << (n - (i * i)) << " and the i was " << i << endl;
            ans = min(ans, 1 + minCount(n - (i * i)));
        }
    }
    // log(ans)
    return ans;
}

void solve()
{

    log(minCount(9))
}

int main()
{
    file_i_o();
    int t = 1, i = 0;
    cin >> t;
    loop(i, 0, t)
        solve();
    return 0;
}
