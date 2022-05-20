#include <bits/stdc++.h>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{

    unordered_map<int, bool> hash;

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = true; // Marking All as True it meansf from every element the sequence is starting
    }
    for (int i = 0; i < n; i++)
    {
        if (hash.count(arr[i] - 1) == 1)
        {
            hash[arr[i]] = false; // marking the value false if value -1 i s present in array that means current value cannot be longest sequence as val-1 is present.
        }
    }

    int maxlen = 0, finalstart = 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == true)
        {
            int len = 1, value = arr[i];
            while (hash.count(len + value) == 1)
                len++;

            if (len > maxlen)
            {
                maxlen = len;
                finalstart = value;
            }
        }
    }
    vector<int> arr2;
    arr2.push_back(finalstart);
    arr2.push_back(finalstart + maxlen - 1);

    return arr2;
}
