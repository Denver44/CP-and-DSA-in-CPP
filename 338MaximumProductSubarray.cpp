#include <iostream>
#include <vector>
using namespace std;
// Actually maxproduct will give the maxproduct bewtwwen the  maxsub and maxproduct
// though this time maxsum is negative but last time masxub wes psotive so maxproduct will take the positive.
// masproduct and minsub are helping hand.
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        if (nums.size() == 0) // No elements in the vector then return 0
        {
            return 0;
        }
        int maxSub = nums[0];
        int minSub = nums[0];
        int maxProduct = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] < 0) // nums[i] is negative then swap it.
            {
                swap(minSub, maxSub);
            }

            maxSub = max(maxSub * nums[i], nums[i]);
            minSub = min(minSub * nums[i], nums[i]);
            maxProduct = max(maxProduct, maxSub);
        }

        return maxProduct;
    }
};
int main()
{
    vector<int> v1;
    v1.push_back(-2);
    v1.push_back(-3);
    v1.push_back(-2);
    v1.push_back(4);
    Solution s1;
    cout << s1.maxProduct(v1);
    return 0;
}