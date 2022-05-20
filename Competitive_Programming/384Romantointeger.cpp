#include <iostream>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;

        int len = s.length();

        int i = 0;

        while (i < len)
        {

            if (s[i] == 'I' && s[i + 1] == 'V')
            {
                res += 4;
                i++;
            }

            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                res += 9;
                i++;
            }

            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                res += 40;
                i++;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                res += 90;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                res += 400;
                i++;
            }

            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                res += 900;
                i++;
            }
            else if (s[i] == 'I')
            {
                res += 1;
            }
            else if (s[i] == 'V')
            {
                res += 5;
            }
            else if (s[i] == 'X')
            {
                res += 10;
            }
            else if (s[i] == 'L')
            {
                res += 50;
            }
            else if (s[i] == 'C')
            {
                res += 100;
            }
            else if (s[i] == 'D')
            {
                res += 500;
            }
            else if (s[i] == 'M')
            {
                res += 1000;
            }
            i++;
        }

        return res;
    }
};

int main()
{

    Solution s;

    cout << s.romanToInt("IX") << endl;
    cout << s.romanToInt("IV");
    return 0;
}