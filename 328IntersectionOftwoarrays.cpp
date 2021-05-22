#include <iostream>
#include <vector>
#include <set>
using namespace std;
// Each element in the result must be unique.
// The result can be in any order.

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s(nums1.begin(), nums1.end()); // Converted in set so all are unique.

        vector<int> out;
        for (auto i : nums2)
        {
            if (cout << s.erase(i)) // as it will delete that value.
            {
                out.push_back(i);
            }
        }
        return out;
    }
};
int main()
{
    set<int> s1;
    s1.insert(0);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.erase(3);
    for (auto i : s1)
    {

        cout << i << " ";
    }

    return 0;
}