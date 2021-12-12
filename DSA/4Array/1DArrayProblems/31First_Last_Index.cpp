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
    int firstIndex = -1;

    while (l <= h) // terminates when low get higher than h.
    {
        int mid = (l + h) / 2;
        if (data < arr[mid])
        {
            h = mid - 1;
        }
        else if (data > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            firstIndex = mid; // We mark it as it can be our answer
            h = mid - 1;      // as we are searching for firstindex so high must mid -1.
        }
    }
    cout << firstIndex << endl;
    l = 0;
    h = n - 1;
    int LastIndex = -1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (data < arr[mid])
        {
            h = mid - 1;
        }
        else if (data > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            LastIndex = mid;
            l = mid + 1;
        }
    }
    cout << LastIndex << endl;

    return 0;
}