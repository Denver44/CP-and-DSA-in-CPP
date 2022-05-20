#include <bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int *arr, int n)
{

    vector<int> tab(n);
    tab[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int ans = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                ans = max(ans, tab[j]);
            }
        }
        tab[i] = ans + 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, tab[i]);
    }
    return ans;
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

    cout << longestIncreasingSubsequence(arr, n);
}