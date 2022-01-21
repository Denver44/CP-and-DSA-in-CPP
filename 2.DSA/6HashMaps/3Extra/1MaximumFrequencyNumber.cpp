#include <bits/stdc++.h>
using namespace std;

int highestFrequency(int arr[], int n)
{

    unordered_map<int, int> map;
    int maxFreq = 0;
    for (int i = 0; i < n; i++)
    {
        ++map[arr[i]];                       // Here we incremented the Count of Freq alos.
        maxFreq = max(maxFreq, map[arr[i]]); // we take the highest value freq element
    }
    int maxElement;
    for (int i = 0; i < n; i++)
    {
        if (map[arr[i]] == maxFreq) // then we tracverse on arr elemnt so that we can return the maxFreqElement according to they were in array.
        {
            maxElement = arr[i];
            break;
        }
    }
    return maxElement;
}
// Here we have to use the pair so we can also differntiate on the baiss of index also.
// ---------------------------- MY Solution (Ineffcient Approach)--------------------
// int highestFrequency(int arr[], int n)
// {

//     unordered_map<int, pair<int, int>> map;
//     for (int i = 0; i < n; i++)
//     {
//         if (map.count(arr[i]) > 0)
//             map[arr[i]].first++;
//         else
//         {
//             map[arr[i]].first = 1;
//             map[arr[i]].second = i;
//         }
//     }

//     int max_value, max_count = INT32_MIN;
//     for (auto i : map)
//     {
//         if (i.second.first > max_count)
//         {
//             max_count = i.second.first;
//             max_value = i.first;
//         }
//         else if (i.second.first == max_count)
//         {
//             if (i.second.second < map[max_value].second)
//             {
//                 max_count = i.second.first;
//                 max_value = i.first;
//             }
//         }
//     }
//     return max_value;
// }