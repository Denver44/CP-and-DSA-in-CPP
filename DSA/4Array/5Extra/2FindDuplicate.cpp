#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int findDuplicate(int *arr, int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
}
// 2nd method best in Time Complexity !IMPORTANT
int findDuplicate2(int *arr, int n)
{
    int sum = 0;
    int tot = ((n - 2) * (n - 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum - tot;
}
void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findDuplicate(arr, n);
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