#include <iostream>
#include <vector>
#include <map>
using namespace std;
// All the element intersecting we have to put in a vector then we have tor return it.
// eg 1 2 2 1   2 2  here 2 reparts 2 time so ans [2 2]
// Intersection of two arrays 1 part in that we have set the unique  no both..

//-------------  NOTE-----------------------
// Each element in the result should appear as many times as it shows in both arrays.
// The result can be in any order.class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> out;
        map<int, int> m1;
        for (auto i : nums1)
        {
            m1[i]++;
        }
        for (auto i : nums2)
        {
            if (m1[i] > 0)
            {
                m1[i]--;
                out.push_back(i);
            }
        }

        return out;
    }
};

int main()
{

    return 0;
}