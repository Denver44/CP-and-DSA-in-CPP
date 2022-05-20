#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //***************************************** 01 METHOD***************************************************//
    int arr[3][3];

    int x = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //***************************************** 02 METHOD***************************************************//
    int *a[3];

    a[0] = new int[3];
    a[1] = new int[3];
    a[2] = new int[3];

    static int y = 10;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = y;
            y++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //***************************************** 03 METHOD***************************************************//
    int **array; // array pointer which will store an address of array pointer.

    array = new int *[3]; // Now this double Pointer Array has Capbitlity of store three address of pointer array.

    array[0] = new int[3];
    array[1] = new int[3];
    array[2] = new int[3];

    static int z = 19;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = z;
            z++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}