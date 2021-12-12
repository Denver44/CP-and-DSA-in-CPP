#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Read the Question 
// simple question
//  we have to print a matrix
//  in which each square should not be prime
//  but the additon of each row must be prime.

void solve()
{

    ll n;
    cin >> n;

    if (n == 2)
    {
        cout << "1 1\n1 1\n";
        return;
    }

    ll arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[i][i] = 1;
        arr[i][i + 1] = 1;
    }
    arr[n - 1][0] = 1;
    arr[n - 1][n - 1] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}