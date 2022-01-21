#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] < arr[h])
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << arr[h];
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