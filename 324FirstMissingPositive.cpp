#include <iostream>
#include <vector>
#include <set>
using namespace std;

// 0(N) timw wiht one constatnt space.
// In this we actually swap the number to its index
//  if the number is negtaive then no swap
// if the number is higher than size no need to swap.
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            while (nums[i] >= 1 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i + 1)
            {
                return i + 1;
            }
        }

        return n + 1;
    }
};

// Time is fast but space requirement is more as we have used one set container.
// using set we find the first missing positive integer
// as positive integer starts from 1
// so if the array is given 0 1 2
//  we have to check from as 1 is there 2 is there and 3 is next posive integer which is not present so 3 is ans.
// class Solution
// {
// public:
//     int firstMissingPositive(vector<int> &nums)
//     {
//         set<int> s1;
//         for (auto i : nums)
//         {
//             s1.insert(i);
//         }
//         int n = nums.size();
//         for (int i = 1; i <= n; i++)
//         {
//             if (s1.find(i) == s1.end())
//             {
//                 return i;
//             }
//         }

//         return n + 1;
//     }
// };

int main()
{

    return 0;
}
