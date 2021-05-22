#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (nums.size() == 0)
        {
            return 0;
        }
        int *dp = new int[nums.size()];
        dp[0] = 1;
        int ovmax = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            int max = 0;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    if (dp[j] > max)
                    {
                        max = dp[j];
                    }
                }
            }
            dp[i] = 1 + max;
            if (dp[i] > ovmax)
            {
                ovmax = dp[i];
            }
        }

        return ovmax;
    }
};

int main()
{

    return 0;
}