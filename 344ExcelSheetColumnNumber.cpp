#include <iostream>
#include <cmath>
using namespace std;

// Math Problem
// Solved like Hexadecimal to Digit Conversion same method is used here.

class Solution
{
public:
    int titleToNumber(string s)
    {
        int len = s.length() - 1;
        int sum = 0;
        int j = 0;
        while (len >= 0)
        {
            int x = ((s[len] - 'A') + 1);
            sum = sum + pow(26, j) * x;
            len--;
            j++;
        }

        return sum;
    }
};

int main()
{

    return 0;
}