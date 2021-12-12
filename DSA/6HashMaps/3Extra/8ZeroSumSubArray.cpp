
#include <bits/stdc++.h>
using namespace std;
// Store the Previous Value in hashmap and taking the sum variable.
bool subArrayZeroSum(int arr[], int n)
{
    // Here the index is jus for sake
    // as we need the Subarray So we find int O(n) time
    // lets say we have array 7 3 1 -4 5 8
    // so we store 7 in map
    // thne  7+3 =10
    // the 10+1 =11
    // then 11 +- (4) =  7 so that means there is value so sum 0 thats why get the value 7 again.
    unordered_map<int, int> hashmap;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i];
        if (sum == 0)
        {
            return true;
        }
        else if (hashmap.find(sum) != hashmap.end())
        {
            return true;
        }
        hashmap[sum] = i;
    }
    return false;
}
