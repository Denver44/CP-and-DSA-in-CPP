#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool findPairs(int arr[], int n)
{
    unordered_map<int, int> map1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            map1[arr[i] + arr[j]]++;
            if (map1[arr[i] + arr[j]] >= 2)
            {
                return true;
            }
        }
    }
}
