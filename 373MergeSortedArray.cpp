#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//  Here we have use the Two pointer method one on M and another one n

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int j = m + n - 1;
        --m;
        --n;

        while (m >= 0 && n >= 0)
        {
            if (nums1[m] > nums2[n])
            {
                nums1[j--] = nums1[m--];
            }
            else
            {
                nums1[j--] = nums2[n--];
            }
        }
        
        // if some element are left to traverse in n and m is finshed.
        while (n >= 0)
        {
            nums1[j--] = nums2[n--];
        }
        }
};

int main()
{

    return 0;
}