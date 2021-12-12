#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Dutch National Flag Algorithm
// In one pass we compeleted this.
// In space Complexity of O(1);
// here we have use three pointer low mid and high
// low for 0
// mid for 1
// high for 2
// if nums[low]  and nums[low] == 0 swap; l++ mid++
// if  nums[mid] == 1 mid++
// if nums[mid]  and nums[high] == 2 swap; high-- mid++
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0;
        int h = nums.size() - 1;
        int mid = l;
        // Till mid is less than or equal to h.

        while (mid <= h)
        {
            if (nums[mid] == 0)
            {
                swap(nums[l], nums[mid]);
                l++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[h]);
                h--;
            }
        }
    }
};

int main()
{

    return 0;
}