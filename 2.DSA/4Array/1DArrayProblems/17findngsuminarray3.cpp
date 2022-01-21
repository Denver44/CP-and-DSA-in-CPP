#include <iostream>
using namespace std;

// Duplicates in Unsorted Array

int main()
{
    int n = 10;
    int arr[n] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int sum = 10;
    int j = n - 1;
    int i = 0;

    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}