#include <iostream>
#include <vector>
using namespace std;
// Using Recurusion
//  Brute Force Appraoch.
class Solution
{
public:
    int count = 0;
    void backtrack(vector<int> &nums, int idx, int tot, int target)
    {
        if (idx == nums.size())
        {
            if (tot == target)
            {
                count++;
                return;
            }
        }
        else
        {
            backtrack(nums, idx + 1, tot + nums[idx], target);
            backtrack(nums, idx + 1, tot - nums[idx], target);
        }
    }
    int findTargetSumWays(vector<int> &nums, int S)
    {
        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        backtrack(nums, 0, 0, S);
        cout << count << endl;
        return count;
    }
};

int main()
{

    return 0;
}