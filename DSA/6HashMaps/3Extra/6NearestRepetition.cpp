
#include <bits/stdc++.h>
using namespace std;

int minDistance(int arr[], int n)
{
    unordered_map<int, int> dist;
    int minDistance = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (dist.count(arr[i])) // If Repeated Element Comes then
            minDistance = min(minDistance, i - dist[arr[i]]);
        dist[arr[i]] = i;
    }
    return minDistance;
}
int main()
{
    int n = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minDistance(arr, n);
}
