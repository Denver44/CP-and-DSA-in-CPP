#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = a;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    // int newarr[3][3];
    // int k = 2;

    // using extra  matrix.
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         newarr[j][k] = arr[i][j];
    //     }
    //     k--;
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (i != j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}