#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
T Binarysearch(T *, T, T, T);

int main()
{

    int arr[10] = {1, 23, 34, 44, 56, 77, 88, 99, 100, 155};
    int number;
    cout << "Please enter the number u r looking in the array" << endl;
    cin >> number;
    int res;
    res = Binarysearch(arr, 0, 10, number);
    if (res == -1)
        cout << "The number u r looking in the array is not found" << endl;
    else
        cout << "The psoition of the number in the array is " << res + 1 << endl;

    return 0;
}
template <class T>

T Binarysearch(T *arr, T l, T h, T value)
{

    T mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == value)
        {
            return (mid);
        }
        else if (arr[mid] < value)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return -1;
}
