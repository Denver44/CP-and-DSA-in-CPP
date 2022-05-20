#include <iostream>
#include <vector>
using namespace std;
// here we have to in O(n) time and without extra space
//  the value of a[i] is between 1 and n
//  so we can use indices of array and negtive to get duplicates in vector and return the result vector.
// And also the most important is that every number is twicd repated not more than so we can use this method.
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] < 0)
            {
                res.push_back(nums[i]);
            }
            nums[idx] = -nums[idx];
        }

        return res;
    }
};