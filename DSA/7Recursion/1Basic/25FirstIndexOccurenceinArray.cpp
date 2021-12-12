#include <iostream>
using namespace std;
int firstindexoccurence(int *arr, int idx, int size, int data)
{
    if (idx == size)
    {
        return -1;
    }

    if (arr[idx] == data) 
    {
        return idx;
    }
    else // faith part it will go and find the first idx of the number.
    {
        int fiisa = firstindexoccurence(arr, idx + 1, size, data);
        return fiisa;
    }
}

int main()
{

    int arr[8] = {22, 3, 7, 4, 6, 3, 4, 45};

    cout << firstindexoccurence(arr, 0, 8, 3) + 1 << endl;

    return 0;
}