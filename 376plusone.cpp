#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// only if 999 then only 1000
// else for o to 8 we have to increase 1.
// and as we have to add one from back so the loop starts from reverse direction.
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int sum = 0;
        vector<int> v1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
                digits[i] = 0;

            else
            {
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);

        for (int i = 0; i < digits.size(); i++)
        {
            cout << digits[i];
        }
        return digits;
    }
};

int main()
{
    Solution s1;
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(5);

    v2.insert(v2.begin(), 9);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }
    // s1.plusOne(v2);

    return 0;
}
