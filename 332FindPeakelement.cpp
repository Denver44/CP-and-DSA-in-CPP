#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }

        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high)
        {
            mid = (low + ((high - low) / 2));

            if (mid > 0 && mid < nums.size() - 1)
            {

                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                {
                    return mid;
                }
                else if (nums[mid - 1] > nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if (mid == 0) // Boundary Conditon
            {
                if (nums[0] > nums[1])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else if (mid == nums.size() - 1) // Boundary Conditon
            {
                if (nums[mid - 1] > nums[mid])
                {
                    return (mid - 1);
                }
                else
                {
                    return (mid);
                }
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}

//----------------02---------------------//

// class Solution
// {
// public:
//     int findPeakElement(vector<int> &nums)
//     {
//         if (nums.size() == 1)
//         {
//             return 0;
//         }

//         int max = nums[0];
//         int maxindex = 0;
//         for (int i = 1; i < nums.size(); i++)
//         {
//             if (nums[i] > nums[i - 1] && max < nums[i])
//             {
//                 max = nums[i];
//                 maxindex = i;
//             }
//         }
//         return maxindex;
//     }
// };
