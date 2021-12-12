#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
// We have use two pointer one l and another one is r and we have one fix value that is i.
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> final;
        set<vector<int>> s; // We have use set to remove the duplicate Numbers.
        if (nums[0] == 0 && nums.size() == 1)
        {
            return final;
        }
        if (nums.size() < 3)
        {
            return final;
        }
        vector<int> v1;
        sort(nums.begin(), nums.end());
        int l, r;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int val = nums[i];
            l = i + 1;
            r = nums.size() - 1;
            while (l < r)
            {
                int csum = val + nums[l] + nums[r];
                if (csum == 0)
                {
                    s.insert({val, nums[l++], nums[r--]});
                }
                else if (csum < 0) // as we sorted so positive numbers are on right side and here the csum is less than zero so that means our negative number value is higher in negative so we have incremnet our negative value to right side so that we can go to positive side and diffrence can get less negative.
                {
                    l++;
                }
                else // vice -vers.
                {
                    r--;
                }
            }
        }

        for (auto i : s)
        {
            final.push_back(i);
        }

        return final;
    }
};
int main()
{
    set<int, greater<int>> s1;
    set<int> s1;
    s1.insert(1);
    s1.insert(4);
    s1.insert(3);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);

    for (auto i : s1)
    {
        cout << i << " ";
    }

    return 0;
}