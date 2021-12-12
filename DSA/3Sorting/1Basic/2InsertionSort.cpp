#include <iostream>
using namespace std;
//1. Insertion sort name suggest to insert array element  in a soretd places.
//2. We consider the first index as sorted.
//3. In this we will no get any largest or smallest value in the array at first tarversal like Bubble and selction.
void Insertionsort(int *arr, int SIZE)
{
    for (int i = 1; i < SIZE; i++)
    {
        for (int j = i - 1; j >= 0; j--) // as the unsorted value want to come to the sorted region so thats why we take j from i-1 to j>=0;
        {
            if (arr[j] > arr[j + 1]) // here the unsorted value  which is j+1 comes to soretd region.
            {
                swap(arr[j], arr[j + 1]); // we swap if j is grater than j+1.
            }
            else
            {
                break; // thats means everyone is sorted.
            }
        }
    }
}

int main()
{
    int arr[] = {12, 46, 246, 67, 34, 89, -234, -677, -1, 6};
    int SIZE = sizeof(arr) / sizeof(arr[0]);

    Insertionsort(arr, SIZE);
    cout << "After sorting the elemet" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
