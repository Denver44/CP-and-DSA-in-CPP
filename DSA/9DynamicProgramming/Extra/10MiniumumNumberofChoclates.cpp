#include <iostream>
#include <stdio.h>
using namespace std;
// Very useful technique.
int getMin(int *arr, int n)
{
    int *dp = new int[n + 1];
    dp[0] = 1;
    // Left Traversal
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }
    // Right Traversal
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1] && dp[i] <= dp[i + 1])
        {
            dp[i] = dp[i + 1] + 1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += dp[i];
    }
    return count;
}

int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMin(arr, n);
    delete[] arr;
}