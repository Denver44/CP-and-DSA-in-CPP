#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void Merge(int *arr, int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int *temp = new int[h + 1];
    while (i <= m && j <= h)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    for (; i <= m; i++)
    {
        temp[k++] = arr[i];
    }
    for (; j <= h; j++)
    {
        temp[k++] = arr[j];
    }
    for (int i = l; i < h + 1; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
}

void MergeSort(int *arr, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
    }
}

void mergeSort(int input[], int size)
{

    MergeSort(input, 0, size - 1);
}
