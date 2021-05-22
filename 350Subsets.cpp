#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// This is total based on Bit manipulation.
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> v1;
        vector<vector<int>> res;

        int power_set_size = pow(2, nums.size()); // as we have to return all possible subsets (the power set).
        int counter, j;
        for (counter = 0; counter < power_set_size; counter++)
        {
            for (j = 0; j < nums.size(); j++)
            {
                if (counter & (1 << j)) // this actually help us. this actually check the i-th bit is set or not.
                {
                    cout << nums[j];
                    v1.push_back(nums[j]);
                }
            }
            res.push_back(v1);
            v1.clear();
            cout << endl;
        }
        return res;
    }
};
int main()
{
    Solution s1;
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    s1.subsets(v2);

    return 0;
}