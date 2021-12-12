#include <iostream>
using namespace std;

// Duplicates in Unsorted Array

int main()
{
    int arr[10] = {3, 6, 2, 18, 0, 6, 25, 7, 8, 10};
    int sum = 10;
    int hash[25 + 1] = {0};

    for (int i = 0; i < 10; i++)
    {
        hash[arr[i]]++;
        int index = sum - arr[i];
        if (hash[index] == 1)
        {
            cout << "The Element " << arr[i] << " and " << index << endl;
        }
    }

    return 0;
}