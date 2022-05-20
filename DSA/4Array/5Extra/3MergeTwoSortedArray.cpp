#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            ans[k++] = arr1[i++];
        else
            ans[k++] = arr2[j++];
    }

    while (i < size1)
    {
        ans[k++] = arr1[i++];
    }
    while (j < size2)
    {
        ans[k++] = arr2[j++];
    }
}

int main()
{

    return 0;
}