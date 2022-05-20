#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        auto itr = nums.begin();
        reverse(nums.begin(), itr + k);
        reverse(itr + k, nums.end());
    }
};
int main()
{

    return 0;
}

//********************* TIME COMPLEXITY IS MORE*************************//
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        while (k--)
        {
            int rightmost = nums[nums.size() - 1];
            for (int i = nums.size() - 1; i >= 1; i--)
            {
                nums[i] = nums[i - 1];
            }
            nums[0] = rightmost;
        }
    }
};
int main()
{

    return 0;
}