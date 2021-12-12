#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {7, 9, 4, 8, 3, 6, 2, 1};

    int i = 0, j = 0;
    int pivot = 5;

    while (i < 8)
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
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
