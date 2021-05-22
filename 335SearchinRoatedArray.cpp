#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    // Slowest But easiest to undestrand Formula.
    //  find the lowest value index
    // and split in two then on side is 0 to lowest value index -1 is sorted ascending order
    // and other one side is lowest value index to nums.size()-1 is sorted ascending order
    // then apply binarysearch on it.
public:
    int BS(vector<int> &nums, int target, int l, int r)
    {
        int mid;
        while (l <= r)
        {
            mid = (l + r) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {

        int minelement_index = 0;
        int lowest = INT32_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < lowest)
            {
                lowest = nums[i];
                minelement_index = i;
            }
        }

        if (target >= nums[minelement_index] && target <= nums[nums.size() - 1])
        {
            int b = BS(nums, target, minelement_index, nums.size() - 1);

            return b;
        }
        else
        {
            int a = BS(nums, target, 0, minelement_index - 1);
            return a;
        }
    }
};
int main()
{

    return 0;
}