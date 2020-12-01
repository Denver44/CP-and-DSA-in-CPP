#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


void solve()
{
    int dest;
    cin >> dest;
    int jumps = 0;
    int y = 0;
    for (int i = 1;; i++)
    {
        if (y >= dest)
            break;
        y += i;
        jumps++;
    }

    if (y == dest || y - dest > 1)
    {
        cout << jumps << endl;
        return;
    }
    else if (y - dest == 1)
    {
        cout << jumps - 1 << endl;
        return;
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
