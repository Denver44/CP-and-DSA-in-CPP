#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    if (n == k)
    {
        for (int i = 1; i <= n; i++)
            arr[i] = i;
        for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";

        return;
    }
    // Array Filling
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            arr[i] = i * -1;
        else
            arr[i] = i;
    }
    // Count of Negtaive and Positive.
    int negative = n - k;
    int positive = k;
    int curpos = n / 2;
    int curneg = (n - (n / 2));

    if (curneg < negative)
    {
        for (int i = n; i >= 1; i--)
        {

            if (curneg == negative)
            {
                break;
            }
            if (arr[i] > 0)
            {
                arr[i] *= -1;
                curneg++;
            }
        }
    }
    if (curpos < positive)
    {
        for (int i = n; i >= 1; i--)
        {

            if (curpos == positive)
            {
                break;
            }
            if (arr[i] < 0)
            {
                arr[i] *= -1;
                curpos++;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
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
        cout << endl;
    }
    return 0;
}
