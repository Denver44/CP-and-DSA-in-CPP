#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {
//         vector<int> res;
//         res.push_back(-1);
//         res.push_back(-1);

//         int a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//         int b = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

//         if (a != nums.size() && nums[a] == target)
//         {
//             res.clear();
//             res.push_back(a);
//         }
//         b--;
//         if (b >= 0 && nums[b] == target)
//         {
//             res.push_back(b);
//         }

//         return res;
//     }
// };

//------------- SAME AS LOWER AND UPPER BOUND --------------------//

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        auto iter = equal_range(nums.begin(), nums.end(), target);
        if (iter.first == iter.second)
            return res;

        res.clear();
        res.push_back(iter.first - begin(nums));
        res.push_back(iter.second - begin(nums) - 1);

        return res;
    }
};

int main()
{

    return 0;
}