#include <iostream>
using namespace std;

void creatingDynamic2DArray(int n)
{

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = input[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // CHECK THIS PART
    for (int i = 0; i < n; i++)
    {
        delete[i] arr;
    }

    delete[] arr;
}

int main()
{

    int *arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr; // This means delete an array pointer.

    return 0;
}
