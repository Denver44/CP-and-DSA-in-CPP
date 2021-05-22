#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Using the first N natural Number we have find out the missing element.
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int tot = (size * (size + 1)) / 2;
        int missingelem, sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        missingelem = tot - sum;

        return missingelem;
    }
};

int main()
{
    vector<int> v1;
    // v1.push_back(3);
    v1.push_back(0);
    v1.push_back(1);
    Solution s1;
    cout << s1.missingNumber(v1);

    return 0;
}