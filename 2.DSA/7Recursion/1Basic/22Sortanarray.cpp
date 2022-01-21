#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int get(int *arr, int size)
{
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[maxIndex] < arr[i])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void sort(int *arr, int size)
{
    int maxIndex;
    if (size > 1)
    {
        maxIndex = get(arr, size);
        swap(arr[maxIndex], arr[size - 1]);
        sort(arr, size - 1);
    }
}

int main()
{
    int arr[10] = {5, 4, 3, 2, 1,10,6,7,88,16};

    sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}