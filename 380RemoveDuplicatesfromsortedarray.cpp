#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // As the array was sorted thats why we are able to use this algo.
        vector<int> v2;
        int last;
        for (int i = 0; i < nums.size(); i++)
        {
            if (last != nums[i])
            {
                v2.push_back(nums[i]);
                last = nums[i];
            }
        }

        nums.clear();
        nums = v2;

        int len = nums.size();
        return len;
    }
};
int main()
{

    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    v2 = v1;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v2[i];
    }

    return 0;
}