#include <bits/stdc++.h>
using namespace std;
// Two Pointer Approach is easy But here we take nlong for Sorting then Traversiang m+n;

// void intersection(int *arr1, int *arr2, int n, int m)
// {
//     sort(arr1, arr1 + n);
//     sort(arr2, arr2 + m);
//     int a_pointer = 0, b_pointer = 0;
//     int size = (n > m ? m : n);
//     while (b_pointer < m && a_pointer < n)
//     {
//         if (arr1[a_pointer] < arr2[b_pointer])
//         {
//             a_pointer++;
//         }
//         else if (arr2[b_pointer] < arr1[a_pointer])
//         {
//             b_pointer++;
//         }
//         else
//         {
//             cout << arr1[a_pointer] << " ";
//             a_pointer++;
//             b_pointer++;
//         }
//     }
// }

// 2nd Method using HashMaps
void intersection(int *arr1, int *arr2, int n, int m)
{
    map<int, int> hashmap;
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    for (int i = 0; i < n; i++)
    {
        hashmap[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (hashmap.count(arr2[i]) > 0)
        {
            cout << arr2[i] << " ";
            hashmap[arr2[i]]--;
            if (hashmap[arr2[i]] == 0)
            {
                hashmap.erase(arr2[i]);
            }
        }
    }
}
int main()
{
    return 0;
}
