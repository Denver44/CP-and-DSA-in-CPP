#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// As we have to cut the tree and make it height 0.
//  as from start if any height has already 0 height then Subtract -1.

void solve()
{
    map<int, int> m1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m1[a]++;
    }
    int len;
    if (m1[0] > 1)
    {
        len = 1;
        // why we put this condition as if there is all input zero so the opearion will be zero.
    }
    if (len == 1)
    {
        cout << m1.size() - 1 << endl;
    }
    else
    {
        cout << m1.size() << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
