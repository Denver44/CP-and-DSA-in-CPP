#include <bits/stdc++.h>

// Kadanes Algorithm it time complexity is O(N) time.
// This has two vartion if they ask for emppty then alltimebest will be zero or at least one element should be there then alltimebest.
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int currentBest = 0;
        int allTimeBest = INT32_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (currentBest + nums[i] >= nums[i])
                currentBest += nums[i];
            else
            {
                currentBest = 0;
                currentBest += nums[i];
            }
            allTimeBest = max(allTimeBest, currentBest);
        }
        return allTimeBest;
    }
};
