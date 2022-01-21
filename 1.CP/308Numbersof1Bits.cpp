#include <iostream>
using namespace std;
// Most Easiest way to check
//  eg if we have gen three then   3 & 2 will be 2 that means now n is 2 so 2 & 1 will be 0 so total will be 2 as we reached 0 after 2 round.
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        uint32_t count;
        while (n != 0)
        {
            count++;
            n = n & (n - 1);
        }
        return count;
    }
};
int main()
{

    return 0;
}
