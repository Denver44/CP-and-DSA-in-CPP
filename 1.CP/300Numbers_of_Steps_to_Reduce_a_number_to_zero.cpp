#include <iostream>
using namespace std;
// if number is even then simply divide by 2.
//  if number is odd then it can be type of n+1
//  if number is odd then it can be type of n+3
// and for 3 it good that we take n-1 3->2->1->0 if we take 3->4->2->1->0

class Solution
{
public:
    int numberOfSteps(int num)
    {
        if (num <= 2)
        {
            return num;
        }
        long count = 0;
        while (num != 0)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            }
            else if (num == 3) // base case
            {
                num = num - 1;
            }
            else if (num % 2 == 1)
            {
                num = num - 1;
            }
            else if (num % 2 == 3)
            {
                num = num + 1;
            }
            count++;
        }

        return count;
    }
};
int main()
{

    return 0;
}