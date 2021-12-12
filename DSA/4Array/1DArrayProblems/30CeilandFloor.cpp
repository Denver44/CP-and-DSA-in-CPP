#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;
    int l = 0;
    int h = n - 1;
    int floor = 0; // Lowest Value.
    int ceil = 0;  //  Upper Value.

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (data < arr[mid]) // data is less than arr[mid]
        {
            h = mid - 1;
            ceil = arr[mid]; // it means that the value of ceil will not go more than arr[mid]
        }
        else if (data > arr[mid]) // data is greater than arr[mid]
        {
            l = mid + 1;
            floor = arr[mid]; // it means that the value of floor will not go less than arr[mid]
        }
        else
        {
            ceil = arr[mid]; // both are same then floor and ceil will equal to data.
            floor = arr[mid];
            break;
        }
    }
    cout << ceil << endl;
    cout << floor << endl;

    return 0;
}