#include <iostream>
using namespace std;

// sum  in Unsorted Array

int main()
{
    int arr[10] = {3, 6, 2, 18, 0, 6, 25, 17, 8, 10};

    int j;
    int sum = 10;

    for (int i = 0; i < 9; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "The Element " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }

    return 0;
}