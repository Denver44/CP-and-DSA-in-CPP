#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 0, 0};

    int i = 0, j = 0;
    int pivot = 0;

    while (i < arr.size())
    {
        if (arr[i] > pivot)
        {
            i++;
        }
        else
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
