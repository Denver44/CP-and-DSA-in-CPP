#include <bits/stdc++.h>
using namespace std;
void recover(int *in, int size, int *out)
{
    int left, right;
    if (size % 2 == 0) // Even Number of N.
    {
        int count = 0;
        int mid = (size / 2) - 1;
        out[mid] = in[0];
        right = mid + 1;
        left = mid - 1;
        while (true)
        {
            if (right == size && left == -1)
                break;
            if (right < size)
                out[right++] = in[++count];
            if (left >= 0)
                out[left--] = in[++count];
        }
    }
    else // ODD NUMBER OF N.
    {
        int count = 0, mid = (size / 2);
        out[mid] = in[0];
        right = mid + 1, left = mid - 1;
        while (true)
        {
            if (right == size && left == -1)
                break;
            if (left >= 0)
                out[left--] = in[++count];

            if (right < size)
                out[right++] = in[++count];
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *output = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    recover(arr, n, output);
    for (int i = 0; i < n; i++)
        cout << output[i] << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}