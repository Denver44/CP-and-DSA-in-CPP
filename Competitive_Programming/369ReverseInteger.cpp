#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {

        int rem = 0, sum = 0;
        long num = x;

        bool flag = false;

        if (num < 0)
        {
            flag = true;  // making flag true means the number is negative.
            num *= -1; // for reverse proecess we making ut positive
        }

        while (num > 0)
        {
            rem = x % 10;
            sum = (10 * sum) + rem;
            num = num / 10;
        }

        if (sum > INT32_MAX)
        {
            return 0;
        }

        if (flag == true)
        {
            sum *= -1;
            return sum;
        }
        else
        {
            return sum;
        }
    }
};
int main()
{

    return 0;
}