#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//  As here we can not use the divison method
// otherwise we can take product of all numbers then divide it by own and push in vector.
// Two solution are there
// 1. By takimg two array Left and right.
// 2. By taking single array.
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        //2. Solution
        vector<int> res; // this will have all the sum of mul from left side
        long long product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            product = product * nums[i];
            res.push_back(product);
        }
        product = 1;
        for (int i = nums.size() - 1; i > 0; i--)
        {

            res[i] = res[i - 1] * product;
            product = product * nums[i];
        }
        res[0] = product;
        for (int i = 0; i < nums.size(); i++)
        {

            cout << res[i] << " ";
        }

        return res;
    }
};

int main()
{
    Solution s1;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    s1.productExceptSelf(v1);

    return 0;
}

// // *********O(N) and O(N) Space ************* //
// vector<int> productExceptSelf(vector<int> &nums)
// {
//     // 1.solution
//     vector<int> res;   // this will contain final result
//     vector<int> left;  // this will have all the sum of mul from left side
//     vector<int> right; // this will have all the sum of mul from right side.
//     int pro = 1;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         pro = pro * nums[i];
//         left.push_back(pro);
//     }
//     pro = 1;
//     for (int i = nums.size() - 1; i >= 0; i--)
//     {
//         pro = pro * nums[i];
//         right[i] = pro;
//     }
//     for (int i = 1; i < nums.size() - 1; i++)
//     {

//         res.push_back((left[i - 1] * right[i + 1]));
//     }
//     res[0] = right[1];
//     res[nums.size() - 1] = left[nums.size() - 2]];
//     for (int i = 0; i < nums.size(); i++)
//     {

//         cout << res[i] << " ";
//     }

//     return res;
// }