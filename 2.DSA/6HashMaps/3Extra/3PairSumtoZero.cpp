
#include <bits/stdc++.h>
using namespace std;
// We dont have tpo make a Duplacte Pair.
int pairSum(int *arr, int n)
{

    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int complement = -arr[i]; // as first we take out it is compliment.

        if (freq.find(complement) != freq.end()) // if we got its complement
        {
            count += freq[complement]; // then add the count of freq in total count.
        }
        freq[arr[i]]++; // at the end we add it to our map.
    }
    return count;
}

// ----------------------------------02-----------
// int pairSum(int *arr, int n)
// {

//     unordered_map<int, int> map;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0) // Positive Number Insertion
//         {
//             map[arr[i]]++;
//         }
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0) // Negtaive Number Compliment Checking
//         {
//             if (map.find(abs(arr[i])) != map.end())
//             {
//                 count += map[abs(arr[i])];
//             }
//         }
//     }
//     count += (map[0] * (map[0] - 1)) / 2; // As we dont want to make a pair of 1 2 and 2 1 so thats why we divide it by 2 so we get only 12 pair
//     return count;
// }