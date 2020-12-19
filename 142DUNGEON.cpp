#include <bits/stdc++.h>
using namespace std;
#define ll long long
// In this Question the sum must be divisble b 9.
// so as the 7 th shot come very member health will be decreased by 1.
// and the min value amoong three must greater than qual to (sum/9);
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    double k = (a + b + c) / 9.0;
    if (k != (int)k)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        int x = min(a, min(b, c));
        if (x >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
