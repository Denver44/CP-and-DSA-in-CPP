#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        bool flag = false;
        uint32_t rev = 1;
        uint32_t j = 0;

        for (int i = 31; i >= 0; i--)
        {
            uint32_t mask = (1 << i); // shifting 1  to (from 31 to 0)

            if (flag)
            {
                if ((n & mask) != 0) // bit on
                {
                    cout << 1;
                    int smask = (1 << j);
                    rev = rev | smask;
                }
                else // bit off
                {
                    cout << 0;
                }
                j++;
            }
            else
            {
                if ((n & mask) != 0)
                {
                    cout << 1;
                    flag = true;
                    int smask = (1 << j);
                    rev = rev | smask;
                    j++;
                }
            }
        }
        cout << endl;

        return rev;
    }
};
int main()
{
    uint32_t n;
    cin >> n;
    Solution s1;
    cout << s1.reverseBits(n);
    return 0;
}

