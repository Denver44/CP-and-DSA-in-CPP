#include <iostream>
using namespace std;
class Solution
{
    //  This is Shortcut formula
    // Eg  100!  has 24 zeros
    //  100 /5 = 20
    // 20 /5 = 4;
    // 20+ 4;
public:
    int trailingZeroes(int n)
    {
        int count = 0;
        while (n > 1)
        {
            count = count + n / 5;
            n = n / 5;
        }
        return count;
    }
};

int main()
{

    return 0;
}