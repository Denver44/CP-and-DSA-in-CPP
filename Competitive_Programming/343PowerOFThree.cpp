#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        else
        {
            while (n > 0) // as always the remainder will be 1 if tis perfect divisble by 3.
            {
                if (n % 3 != 0)
                {
                    return false;
                }
                n = n / 3;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}