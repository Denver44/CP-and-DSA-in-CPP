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
    int sum = (a + b + c);
    if (sum % 9 == 0)
    {
        int minvalue = min(a, min(b, c));
        if (minvalue > sum / 9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
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
