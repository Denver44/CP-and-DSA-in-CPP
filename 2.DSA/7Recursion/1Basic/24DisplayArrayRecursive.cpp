

#include <iostream>
using namespace std;
void display(int *arr, int idx, int size)
{
    if (idx == size)
    {
        return;
    }

    cout << arr[idx] << " ";
    display(arr, idx + 1, size);
}
void displayreverse(int *arr, int idx, int size)
{
    if (idx == size)
    {
        return;
    }

    displayreverse(arr, idx + 1, size);
    cout << arr[idx] << " ";
}

int maxarray(int *arr, int idx, int size)
{
    if (idx == size)
    {
        return arr[idx];
    }

    int max = maxarray(arr, idx + 1, size);
    if (max > arr[idx])
    {
        return max;
    }
    else
    {
        return arr[idx];
    }
}
int main()
{

    int arr[5] = {220, 303, 700, 4, 60};
    // display(arr, 0, 5);
    // cout << endl;
    // displayreverse(arr, 0, 5);
    cout << maxarray(arr, 0, 4);

    return 0;
}