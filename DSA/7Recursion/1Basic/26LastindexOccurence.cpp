#include <iostream>
using namespace std;
int lastindexoccurence(int *arr, int idx, int size, int data)
{
    if (idx == size)
    {
        return -1;
    }
    int lissa = lastindexoccurence(arr, idx + 1, size, data);

    if (arr[idx] == data && lissa == -1) //as we want the last index so it will first traverse to fulll length and return -1 as at returning time if the arr[idx] == data return idx and that time the last liisa value muts be -1 which state the the this is the first occurrnce from backwards side.
    {
        return idx;
    }
    else
    {
        return lissa;
    }
}

int main()
{

    int arr[8] = {22, 3, 7, 4, 6, 3, 4, 45};

    cout << lastindexoccurence(arr, 0, 8, 4);

    return 0;
}