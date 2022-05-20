#include <bits/stdc++.h>
using namespace std;

int Partition(int *arr, int pivot, int l, int h)
{
    int i = l, j = l;
    while (i <= h)
    {
        if (arr[i] > pivot)
            i++;
        else
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
    return j - 1;
}
void Helper(int *arr, int l, int h)
{
    if (l >= h)
        return;

    int pivot = arr[h];
    int pi = Partition(arr, pivot, l, h);

    Helper(arr, l, pi - 1);
    Helper(arr, (pi + 1), h);
}

void quickSort(int input[], int size)
{

    Helper(input, 0, size - 1);
}

int main()
{

    return 0;
}
