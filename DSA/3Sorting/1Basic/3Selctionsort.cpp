#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//1. for one pass we will get the smallest value in the list at the top.
void selctionsort(int *arr, int SIZE)
{
    int i, j, min;

    //2. J will find the small ememnt and then bring the min there
    //3. min will get the index of smallest element in the list.

    for (i = 0; i < SIZE - 1; i++) // Traversal
    {
        for (min = i, j = i + 1; j < SIZE; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        swap(&arr[i], &arr[min]);
    }
}
int main()
{
    int arr[] = {12, 1, 88, 12, 69, 4, 2, 3, 7, -9, 0};
    int SIZE = sizeof(arr) / sizeof(arr[0]);

    selctionsort(arr, SIZE);
    cout << "After sorting the elemet" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
