#include <iostream>
#include <vector>
#include <cmath>
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();

        while (i < m && j < n) 
        {
            if (nums1[i] <= nums2[j])
            {
                nums3.push_back(nums1[i++]);
            }
            else if (nums2[j] < nums1[i])
            {
                nums3.push_back(nums2[j++]);
            }
        }
        for (; i < m;)
        {
            nums3.push_back(nums1[i++]);
        }
        for (; j < n;)
        {
            nums3.push_back(nums2[j++]);
        }

        int nums3size = nums3.size();
        double res = 0;
        if (nums3size % 2 != 0)
        {
            res = nums3[(nums3size / 2)];
        }

        else
        {
            res = (nums3[(nums3size / 2) - 1] + nums3[(nums3size / 2)]);
            res = res / 2;
        }

        return res;
    }
};

int main()
{

    return 0;
}
