//************************************************************************* SHELL SORT TECHINQUE *************************************************************************************************//
// SHELL SHORT TECHNIQUE IS MORE FASTERS THAN THE BUBBLE SORT IT REQUIRED LESS SPACE AND TIME TO EXECUTE THE RESULT.
#include <iostream>
using namespace std;

void Shellshort(int arr[], int n)
{
    int gap, temp, j;

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            temp = arr[i];
            j = i - gap;
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + gap] = arr[j];
                j = j - gap;
            }
            arr[j+gap] = temp;
        }
    }
}

int main()
{

    int arr[] = {-9, 8, 7, 6, 5, 4, 3, -2, 1};
    int SIZE = sizeof(arr) / sizeof(arr[0]);

    Shellshort(arr, SIZE);

    cout << "The Sorted Array  After Shell sorting in Ascending :- " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}