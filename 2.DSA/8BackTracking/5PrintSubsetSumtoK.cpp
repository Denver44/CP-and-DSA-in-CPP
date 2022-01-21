#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(int *arr, int size, int k, string psf)
{
    // cout<<k<<endl;
    if (k < 0)
        return;
    if (size == 0 && k != 0)
        return;
    if (k == 0)
    {
        cout << psf << endl;
        return;
    }

    helper(arr + 1, size - 1, k - arr[0], psf + to_string(arr[0]) + " ");
    helper(arr + 1, size - 1, k, psf);
}

void printSubsetSumToK(int input[], int size, int k)
{
    helper(input, size, k, "");
}

void solve()
{
    int arr[9] = {5, 12, 3, 17, 1, 18, 15, 3, 17};
    printSubsetSumToK(arr, 9, 6);
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