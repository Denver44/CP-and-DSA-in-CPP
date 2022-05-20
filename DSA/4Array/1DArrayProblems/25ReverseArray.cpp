#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int size, int idx)
{
    if (idx == size)
    {
        return;
    }
    reverse(arr, size, idx + 1);
    cout << arr[idx] << " ";
}
int main()
{
    int n1;
    cin >> n1;
    int *arr1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    reverse(arr1, n1, 0);

    return 0;
}