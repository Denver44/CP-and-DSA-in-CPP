#include <bits/stdc++.h>
using namespace std;

int platformsNeeded(int arr[], int dept[], int n)
{
    sort(arr, arr + n);
    sort(dept, dept + n);
    int platform = 0;
    int max_platform = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] < dept[j])
        {
            platform++;
            max_platform = max(max_platform, platform);
            i++;
        }
        else
        {
            j++;
            platform--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *dep = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }
    cout << platformsNeeded(arr, dep, n);
}

// int platformsNeeded(int arr[], int dept[], int n)
// {
//     sort(arr, arr + n);
//     sort(dept, dept + n);
//     int platform = 0;
//     int max_platform = 0;
//     int i = 0, j = 0;
//     while (i < n && j < n)
//     {
//         if (arr[i] < dept[j])
//         {
//             platform++;
//             max_platform = max(max_platform, platform);
//             i++;
//         }
//         else
//         {
//             j++;
//             platform--;
//         }
//     }
// }