#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    // Two pointer is best method to solve this problem.

public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int area = 0;

        while (left < right)
        {
            if (height[left] < height[right])
            {
                // as if left height is less than upto height left only we can fill water from starting left to right
                // distnace is always d2-d1 thst why right - left so we can distnace psotive as distance can never be negative.
                area = max(area, height[left] * (right - left));
                left++;
            }
            else
            {

                area = max(area, height[right] * [right - left]);
                right++;
            }
        }
        return area
    }
};
int main()
{

    return 0;
}