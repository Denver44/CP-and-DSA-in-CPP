#include <iostream>
using namespace std;

int Rbin(int *arr, int l, int h, int key)
{
    if (l == h)
    {
        if (arr[l] == key)
        {
            return l;
        }
        return 0;
    }
    else
    {
      int  mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
           return Rbin(arr, l, mid - 1, key);
        }
        else
        {
           return Rbin(arr, mid + 1, h, key);
        }
    }
}

int main()
{
    int arr[10] = {3, 5, 7, 8, 10, 12, 16, 22, 26, 30};
    cout << Rbin(arr, 0, 9, 26);

    return 0;
}