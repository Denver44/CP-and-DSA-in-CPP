#include <iostream>
#include <algorithm>
using namespace std;
void sort012(int *arr, int n)
{
    int i = 0, j = 0, k = n - 1;
    int pivot = 0;
    while (i <= k)
    {

        if (arr[i] > pivot && arr[i] != 2)
            i++;
        else if (arr[i] == 2)
            swap(arr[i], arr[k--]);
        else
        {
            swap(arr[i++], arr[j++]);
        }
    }
}

int main()
{

    int arr[5] = {2, 2, 0, 1, 1};

    sort012(arr, 5);

    return 0;
}