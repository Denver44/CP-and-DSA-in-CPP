#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Vector diff array technique is used.

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(200001, 0);
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        if (b + 1 < arr.size())
        {
            arr[b + 1]--;
        }
    }
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1];
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
