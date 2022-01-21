#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // Increasing Number Printing
            cout << j;
        for (int spaces = 1; spaces <= (2 * n - (2 * i)); spaces++) // Spaces Printing
            cout << " ";
        for (int j = i; j >= 1; j--) // Decreasing Number Printing
            cout << j;
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
