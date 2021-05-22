#include <iostream>
using namespace std;

// Non-Interview Question.
//  as if a number is power of two the (n & n-1) will be 0
//  as we know if works only if value is pos or negative.
//  as here we get 0 then we will get false thats why we write false first as we get zero conditon get fails and we get the true.

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        if (n <= 0)
        {
            return false;
        }
        else
        {
            return n & (n - 1) ? false : true;
        }
    }
};

int main()
{

    return 0;
}
