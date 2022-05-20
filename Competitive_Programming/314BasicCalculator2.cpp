#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
    int calculate(string s)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        // 3 + 3*2

        char lastsign = '+'; // + *
        char cur;
        int temp = 0;
        int res = 0;
        stack<int> s1;

        for (int i = 0; i < s.length(); i++)
        {
            cur = s[i]; //3

            if (isdigit(cur))
            {
                temp = 10 * temp + cur - '0'; // 3 6
                // we have use it because if we number like 22 or 333 then we want in in there original form not a single digit.
            }

            //stack  3 3

            if (!isdigit(cur) && !isspace(cur) || i == s.length() - 1)
            {
                if (lastsign == '+')
                {
                    s1.push(temp);
                }
                else if (lastsign == '-')
                {
                    s1.push(-temp);
                }
                else
                {
                    if (lastsign == '*')
                    {
                        int num = s1.top();
                        s1.pop();
                        s1.push(num * temp); // 3*2 == 6
                    }
                    else
                    {
                        int num = s1.top();
                        s1.pop();
                        s1.push(num / temp);
                    }
                }

                lastsign = cur;
                temp = 0;
            }
        }

        while (!s1.empty())
        {
            cout << s1.top();
            s1.pop();
        }
        return res;
    }
};
int main()
{

    return 0;
}