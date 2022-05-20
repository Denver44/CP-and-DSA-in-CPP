#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

void basicOfArray()
{

    array<int, 5> arr1;
    for (int i = 0; i < 5; i++)
        cin >> arr1[i]; //[] this can also use to point the element for the array

    for (int i = 0; i < 5; i++)
        cout << arr1.at(i) << " "; // .at()  this can also use to point the element fo the array
    cout << endl;

    array<int, 5> arr2 = {1, 2, 3, 4, 5};
    for (int const &i : arr2)
        cout << i << " ";
    cout << endl;
}
void arraySwapFunction()
{
    array<int, 5> array1 = {11, 12, 13, 14, 15};
    array<int, 5> array2 = {1, 2, 3, 4, 5};
    cout << "Befor Swapping" << endl;
    for (int i = 0; i < 5; i++)
        cout << " " << array1[i];
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << " " << array2[i];
    cout << endl;

    array1.swap(array2);

    cout << "After Swapping" << endl;
    for (int i = 0; i < 5; i++)
        cout << " " << array1[i];

    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << " " << array2[i];
}
void basicOfArrayFunctions()
{

    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    cout << arr1.front() << endl; // it give the first element
    cout << arr1.back() << endl;  // it give the last element

    array<int, 5> arr2;
    arr2.fill(10); // this function will fill the array with the given value.

    for (int i = 0; i < arr.size(); i++)
        cout << arr1.at(i) << " ";
}
void arrayAlgoFunctions()
{

    int arr[6] = {1, 5, 77, 3, -6, 8};

    all_of(arr, arr + 6, [](int x)
           { return x > 0; })
        ? cout << "All are positive" << endl
        : cout << "All are not positive" << endl;

    any_of(arr, arr + 6, [](int x)
           { return x < 0; })
        ? cout << "one value is negative" << endl
        : cout << "no one is not negative" << endl;

    none_of(arr, arr + 6, [](int x)
            { return x == 6; })
        ? cout << "8 is n0t there" << endl
        : cout << "yes one value is 8" << endl;
}
void arrayFunctions()
{

    int arr2[6];
    copy_n(arr, 6, arr2);
    for (int i = 0; i < 6; i++)
        cout << arr2[i] << " ";

    int arr3[6];
    cout << endl;
    iota(arr3, arr3 + 6, 20);
    for (int i = 0; i < 6; i++)
        cout << arr3[i] << " ";
}
int main()
{

    basicOfArray();
    arraySwapFunction();
    basicOfArrayFunctions();
    arrayAlgoFunctions();
    arrayFunctions();
    return 0;
}
