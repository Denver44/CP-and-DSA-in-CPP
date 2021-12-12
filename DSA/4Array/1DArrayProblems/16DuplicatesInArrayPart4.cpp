#include <iostream>
using namespace std;

// Duplicates in Unsorted Array

int main()
{
    int arr[10] = {1, 6, 2, 18, 1, 6, 18, 9, 2, 9};

    int j;
    int count = 1;

    for (int i = 0; i < 9; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
            if (count > 1)
            {
                cout << "The Element " << arr[i] << " is repeated for " << count << endl;
            }
        count = 1;
    }

    return 0;
}