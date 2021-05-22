#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> output;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                output.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                output.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                output.push_back("Buzz");
            }
            else
            {
                string str = to_string(i);
                output.push_back(str);
            }
        }

        return output;
    }
};

int main()
{

    return 0;
}