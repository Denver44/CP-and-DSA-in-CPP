#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

bool isSorted(int *arr, int size)

{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1);
}
void solve()
{
    int arr[10] = {1, 2, 3, 4, 500, 6, 7, 8, 9, 10};
    (isSorted(arr, 10) == 1) ? cout << "YES" : cout << "NO";
}
int main()
{
    solve();
    return 0;
}
