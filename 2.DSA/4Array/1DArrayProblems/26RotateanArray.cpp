#include <bits/stdc++.h>
using namespace std;
// if we want to rotate an array
// first if the k is largest just do (k% size of array)
// if( k is negative then add arrlength +k )
// eg if size is 5 and k is -1 then if we rotate it by -1 it will give result rotate of 4.
// first rotate first portion from( 0 to arr lenght - k)
// second half from where we (left to till arr size)
// then rotate both the array.
void reverse(int *arr, int start, int end)
{
    int i = start;
    int j = end;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr1 = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    int rotate;
    cin >> rotate;
    rotate = rotate % size;
    if (rotate < 0)
    {
        rotate = rotate + size;
    }

    int upto = size - rotate;
    reverse(arr1, 0, upto - 1);
    reverse(arr1, upto, size - 1);
    reverse(arr1, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}