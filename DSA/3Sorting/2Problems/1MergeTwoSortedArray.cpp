#include <iostream>
using namespace std;
int *mergetwosortedarray(int *arr1, int *arr2, int size1, int size2)
{
    int *arr = new int[size1 + size2];
    int a_pointer = 0;
    int b_pointer = 0;
    int c_pointer = 0;
    while (a_pointer < size1 && b_pointer < size2)
    {
        if (arr1[a_pointer] <= arr2[b_pointer])
        {
            arr[c_pointer++] = arr1[a_pointer++];
        }
        else
        {

            arr[c_pointer++] = arr2[b_pointer++];
        }
    }

    while (a_pointer < size1)
    {
        arr[c_pointer++] = arr1[a_pointer++];
    }
    while (b_pointer < size2)
    {
        arr[c_pointer++] = arr2[b_pointer++];
    }
    return arr;
}

int main()
{
    int arr1[5] = {2, 5, 12, 18, 20};
    int arr2[8] = {7, 9, 11, 15, 25, 28, 30, 35};

    int *arr = mergetwosortedarray(arr1, arr2, 5, 8);
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
