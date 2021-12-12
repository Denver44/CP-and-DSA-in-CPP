#include <iostream>
#include <vector>
#include <deque>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        if (k == 1) // This is simple as if window size is is of 1 the every element is max or min in itself.
            return nums;

        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < k; i++)
        {
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back(); // as we want the highest number at front so if the nums[i] is greater then dequeue top then pop it.
            }
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]);
        for (int i = k; i < nums.size(); i++)
        {
            while (!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front(); // if the front element is in between the winow then keep it otherwise we will op it.
            }
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back(); // as we want the highest number at front so if the nums[i] is greater then dequeue top then pop it.
            }
            dq.push_back(i);
            result.push_back(nums[dq.front()]);
        }

        return result;
    }
};
int main()
{

    return 0;
}
