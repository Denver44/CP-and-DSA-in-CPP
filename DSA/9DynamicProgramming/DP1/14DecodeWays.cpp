#include <iostream>
using namespace std;

// Here the First Charcter can Never be Zero its Given.

int DecodeWays(string digit)
{

    int n = digit.size();
    int dp[n] = {0};
    dp[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (digit[i - 1] == '0' && digit[i] == '0')
        {
            dp[i] = 0;
        }
        else if (digit[i - 1] == '0' && digit[i] != '0')
        {
            dp[i] = dp[i - 1];
        }
        else if (digit[i - 1] != '0' && digit[i] == '0')
        {
            if (digit[i - 1] == '1' || digit[i - 1] == '2')
            {
                dp[i] = i >= 2 ? dp[i - 2] : 1;
            }
            else
            {
                dp[i] = 0;
            }
        }
        else
        {
            string sdigit = digit.substr(i - 1, i + 1);
            int a = stoi(digit.substr(i - 1, 2));
            if (a <= 26)
            {
                dp[i] = dp[i - 1] + (i >= 2 ? dp[i - 2] : 1);
            }
            else
            {
                dp[i] = dp[i - 1];
            }
        }
    }

    return dp[n - 1];
}

int main()
{

    string str;
    cin >> str;

    cout << DecodeWays(str);

    return 0;
}