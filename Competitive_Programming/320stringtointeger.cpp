#include <iostream>
#include <cstring>
using namespace std;
// Simple Question
// if first charcter is " " or - or + or digit then no problem or upcomig also
// but we dont words first then charcter.
// else we have to return 0
class Solution
{
public:
    int myAtoi(string str)
    {
        long result = 0;
        int indicator = 1;
        int flag = 0;
        int i = 0;
        while (str[i] == ' ')
        {
            i++;
        }

        if (str[i] == '-')
        {
            indicator = -1;
            i++;
        }
        else if (str[i] == '+')
        {
            indicator = 1;
            i++;
        }

        while (isdigit(str[i]))
        {
            result = result * 10 + (str[i++] - 48);

            if (result * indicator >= INT32_MAX)
            {
                return INT32_MAX;
            }
            if (result * indicator <= INT32_MIN)
            {
                return INT32_MIN;
            }
        }
        cout << result << endl;
        result = result * indicator;
        return result;
    }
};

int main()
{
    int x = atoi("456  hello baby");
    // cout << x << endl;
    string str = "23";
    int j = 0;
    int i = str.find_first_not_of(str[j] >= 97 && str[j] <= 122);
    // cout << isdigit('d')<<endl;
    cout << isalpha('@') << endl;
    // cout << i << endl;
}
