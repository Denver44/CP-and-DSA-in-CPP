#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// ------------- Simple Question
//x ,p and k were given by changing the vlaue of kth position of array we have to make pth position of array equal to x.

void solve()
{

    int n, x, p, k, ans = 0;
    cin >> n >> x >> p >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (arr[p - 1] == x)
    {
        cout << "0" << endl;
    }
    else if (k == p)
    {
        if (x > arr[p - 1])
        {
            for (int i = p - 1; arr[i] < x && i < n; i++)
            {
                ans++;
            }
            cout << ans << endl;
        }
        else
        {
            for (int i = p - 1; arr[i] > x && i >= 0; i--)
            {
                ans++;
            }
            cout << ans << endl;
        }
    }
    else if (k > p)
    {
        if (x > arr[p - 1])
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = p - 1; arr[i] > x && i >= 0 && i < n; i--)
            {
                ans++;
            }
            cout << ans << endl;
        }
    }
    else if (k < p)
    {
        if (x < arr[p - 1])
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = p - 1; arr[i] < x && i >= 0 && i < n; i++)
            {
                ans++;
            }
            cout << ans << endl;
        }
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