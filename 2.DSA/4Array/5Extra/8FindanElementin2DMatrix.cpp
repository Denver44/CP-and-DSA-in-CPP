#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void findanElement(int a[][4], int m, int n, int x)
{
    int i = 0;
    int j = n - 1;
    while (i < m && j >= 0)
    {
        if (a[i][j] == x)
        {
            cout << i << " " << j << " " << a[i][j];
            return;
        }
        else if (a[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "No Such Element present " << x;
    return;
}

void solve()
{
    // The array should be sorted in row and colum wise and in increasing order.
    int arr[5][4] = {{5, 7, 8, 20},
                     {9, 11, 13, 30},
                     {10, 20, 29, 40},
                     {15, 23, 30, 50},
                     {18, 25, 33, 60}};

    findanElement(arr, 5, 4, 60);
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