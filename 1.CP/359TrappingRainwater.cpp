#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    //  this Question is diffrent as we have to store the max water between the bulding.
public:
    int trap(vector<int> &height)
    {
        int sum = 0;
        int left = 0;
        int right = 0;
        int n = height.size();

        int *aleft = new int[n];
        int *aright = new int[n];
        int i = 0;
        while (i < n)
        {
            left = height[i];
            for (int j = 0; j < i; j++)
            {
                left = max(left, height[j]);
            }
            aleft[i] = left;
            i++;
        }

        for (int j = 0; j < i; j++)
        {
            cout << aleft[i] << " ";
        }

        int i = 0;
        while (i < n)
        {
            right = height[i];
            for (int j = i + 1; j < n; j++)
            {
                right = max(right, height[j]);
            }
            aright[i] = right;
            i++;
        }

        for (int j = 0; j < n; j++)
        {
            sum += (min(aright[j], aleft[j]) - height[i]);
        }

        return sum;
    }
};
int main()
{

    return 0;
}

//------------ 2nd------------

// class Solution
// {
// public:
//     int trap(vector<int> &height)
//     {
//         int sum = 0;
//         int left = 0;
//         int right = 0;
//         int n = height.size();

//         int *aleft = new int[n];
//         int *aright = new int[n];
//         int i = 0;
//         while (i < n)
//         {
//             left = height[i];
//             for (int j = 0; j < i; j++)
//             {
//                 left = max(left, height[j]);
//             }
//             aleft[i] = left;
//             i++;
//         }

//         i = 0;
//         while (i < n)
//         {
//             right = height[i];
//             for (int j = i + 1; j < n; j++)
//             {
//                 right = max(right, height[j]);
//             }
//             aright[i] = right;
//             i++;
//         }

//         for (int j = 0; j < n; j++)
//         {
//             sum += (min(aright[j], aleft[j]) - height[j]);
//         }

//         return sum;
//     }
// };