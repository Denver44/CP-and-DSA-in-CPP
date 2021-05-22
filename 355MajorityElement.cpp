#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return nums[0];
        }

        map<int, int> m1;

        for (int i = 0; i < nums.size(); i++)
        {
            m1[nums[i]]++;
        }
        int maximum = 0;
        int maxelem;
        for (auto itr = m1.begin(); itr != m1.end(); itr++)
        {
            if (itr->second > maximum)
            {
                maxelem = itr->first;
                maximum = itr->second;
            }
        }
        return maxelem;
    }
};
int main()
{

    return 0;
}