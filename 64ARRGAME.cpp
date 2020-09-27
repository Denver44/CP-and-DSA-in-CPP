#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

//  In this Question we actually made a two subset of max Zero.
//  The First element and Last Element will be 1.
//  only in one condition the Nayo can win if there is only one subset of zero and its odd then only.


void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxa = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        else
        {
            if (count > maxa)
            {
                maxa = count;
            }
            count = 0;
        }
    }
    int chk = 0;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        else
        {
            if (count > maxa / 2)
            {
                chk++;
            }
            count = 0;
        }
    }

    if (chk < 2)
    {
        if (maxa % 2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
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
    cin >> t; // testcases
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}