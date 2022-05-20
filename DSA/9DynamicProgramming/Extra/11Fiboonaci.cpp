#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int fib(int n, int *arr)
{
    // Recusion + Memoization TOP Down Approach
    if (n == 1 or n == 2)
        return 1;

    if (arr[n] != 0)
    {
        return arr[n];
    }
    int output = fib(n - 1, arr) + fib(n - 2, arr);
    arr[n] = output;
    return output;
}
int fib2(int n)
{
    // Tabulation Method Bottom-Up Approach
    int *arr = new int[n + 1];
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int output = arr[n];
    delete[] arr;
    return output;
}
void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    memset(arr, 0, sizeof(int) * (n + 1));
    cout << fib(n, arr) << endl;
    cout << fib2(n);
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