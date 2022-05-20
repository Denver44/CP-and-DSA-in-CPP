#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// Always Watch a pattern in tabular form.
// Here we dvided the pattern in three from =>   1 space = (n-i)  2 Increasing  (2*i)   3 Decreasing  ((2*i)-2)
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces <= (n - i); spaces++) // To print spaces (n-i);
            cout << " ";
        for (int inc = i; inc < (2 * i); inc++) // To print Number in Incresing form
            cout << inc;
        for (int dec = ((2 * i) - 2); dec >= i; dec--) // To print Number in Decreasing form.
            cout << dec;
        cout << endl;
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
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
