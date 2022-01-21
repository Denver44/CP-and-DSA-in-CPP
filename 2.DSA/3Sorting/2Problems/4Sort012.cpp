#include <bits/stdc++.h>
using namespace std;

// Here we have created a region
// first all are unknown i =0 j= 0 k = arr.size()-1
// 0 to j-1 is for 0
// j to i-1 is for 1
//  i to k is for 2.
// so we have to go until i <= k
// if we traversal i till size then as per second condition all element 1 2 get swap and we 021.

int main()
{
    vector<int> arr = {1, 1, 2, 2, 0, 1, 2, 2, 1, 0, 1, 2, 0, 2, 1};

    int i = 0, j = 0, k = arr.size() - 1;

    while (i <= k)
    {
        if (arr[i] == 0)
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[k]);
            k--;
        }

        else
        {
            i++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
