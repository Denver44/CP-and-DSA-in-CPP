#include <iostream>
#include <vector>
using namespace std;
vector<int> allindexoccurence(vector<int> &v1, int *arr, int idx, int size, int data)
{
    if (size == idx)
    {
        return v1;
    }

    allindexoccurence(v1, arr, idx + 1, size, data);
    if (arr[idx] == data)
    {
        v1.push_back(idx);
        return v1;
    }
    else
    {
        return v1;
    }
}

int main()
{

    int arr[10] = {22, 3, 7, 4, 6, 3, 4, 45, 5, 9};

    vector<int> v1;
    allindexoccurence(v1, arr, 0, 10, 3);

    for (auto i : v1)
    {
        cout << i << " ";
    }

    return 0;
}