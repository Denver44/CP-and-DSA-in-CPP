#include <bits/stdc++.h>
using namespace std;
// Time : - O(N)
// Space : - O(N)
int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> helper; // As we UnorderedMap takes O(1) time .
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // As here the values of the array can be negative so we take compliment for both positive and negative.
        int compliment;
        compliment = (arr[i] + k);
        if (helper.find(compliment) != helper.end())
        {
            count += helper[compliment];
        }
        compliment = (arr[i] - k);
        if (helper.find(compliment) != helper.end())
        {
            count += helper[compliment];
        }

        helper[arr[i]]++;
    }

    return (k == 0) ? count / 2 : count;
}

// ----------------- using If Conditon for k==0 -----------------
// #include <bits/stdc++.h>
// using namespace std;
// int getPairsWithDifferenceK(int *arr, int n, int k)
// {
//     unordered_map<int, int> helper; // As we UnorderedMap takes O(1) time .
//     int count = 0;
//     int compliment;

//     for (int i = 0; i < n; i++)
//     {
//         compliment = (arr[i] + k);

//         if (helper.find(compliment) != helper.end())
//             count += helper[compliment];

//         if (k != 0)
//         {
//             compliment = (arr[i] - k);

//             if (helper.find(compliment) != helper.end())
//                 count += helper[compliment];
//         }

//         helper[arr[i]]++;
//     }

//     return count;
// }