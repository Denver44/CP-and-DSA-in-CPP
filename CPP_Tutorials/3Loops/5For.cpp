#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
            break; // the break will break the loop as soon as the above condition get satisfied.
        cout << i << " ";
    }

    // ------------------------ 1D Array ---------------------------------------------
    int arr[5] = {1, 2, 3, 4, 8};
    // Here we have used auto keyword so it will be automatically get that datatype like we dont need to declare it is int or string we can simply write auto.

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    string arr2[5] = {"1", "2", "denver", "tokyo", "rio"};
    for (auto str : arr2)
    {
        cout << str << " ";
    }

    cout << endl;
    char arr3[5] = {66, 'A', 'B', 90};
    for (auto i : arr3)
    {
        cout << i << " ";
    }
    cout << endl;

    // --------------  To change the actual value so pass by Refernce or Address  --------------------------------

    int arr4[5] = {1, 2, 3, 4, 8};

    for (auto &i : arr4)
    {
        cout << ++i << " ";
    }
    cout << endl;
    for (auto i : arr4)
    {
        cout << i << " ";
    }
    cout << endl;

    //------------------------- 2D Array -------------------------------------

    int A[2][3];

    for (auto &x : A)
    {
        for (int &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
This is called for each loop there is no syntax of each but it called as for each loop.
Now we used more this way to print or take input for our array.
*/