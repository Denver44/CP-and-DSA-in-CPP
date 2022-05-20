#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    int x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << 0 << endl;
        return;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            swap(arr[i], x);
            count++;

            if (is_sorted(arr.begin(), arr.end()))
            {
                cout << count << endl;
                return;
            }
        }
    }
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << count << endl;
    }
    else
    {
        cout << "-1" << endl;
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