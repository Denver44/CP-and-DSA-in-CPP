#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// N is Always ODD !IMPORTANT
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i <= (n / 2) + 1)
        {
            for (int spaces = 1; spaces <= i - 1; spaces++)
                cout << " ";

            for (int j = 1; j <= i; j++)
                cout << "* ";
        }
        else
        {
            static int x = 1;
            for (int spaces = 1; spaces <= i - ((2 * x) + 1); spaces++)
                cout << " ";
            for (int j = 1; j <= i - (2 * x); j++)
                cout << "* ";
            x++;
        }

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
