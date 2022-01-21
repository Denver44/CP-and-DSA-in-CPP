#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        vector<int> v1;
        while (n != 1)
        {
            // As if the sum of n number keeps on repeating then to break the loop this condition isued.
            if (!v1.empty())
            {
                for (int i = 0; i < v1.size(); i++)
                {
                    if (v1[i] == n)
                    {
                        return false;
                    }
                }
            }
            v1.push_back(n);

            int rem = 0;
            int sum = 0;

            while (n > 0)
            {
                rem = n % 10;
                rem = rem * rem;
                sum = sum + rem;
                n = n / 10;
            }
            n = sum;
            sum = 0;
            if (n == 1)
            {
                break;
            }
        }

        return true;
    }
};

int main()
{
    Solution s1;
    cout << s1.isHappy(19);
    cout << "hello";

    return 0;
}