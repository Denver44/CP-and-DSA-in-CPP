#include <iostream>
#include <vector>
using namespace std;

// Here 0 means Free Space.

//    ----Patttern---
//       0  X  A  *  B  .  C
//s|  0  T  F  F  F  F  F  F
//t|  X  F  T  F  T  F  F  F
//r|  A  F  F  T  T  F  F  F
//i|  A  F  F  T  T  F  F  F
//n|  B  F  F  F  F  T  F  F  <- Here for * we check that prev pattern is A and current text is B so it will be flase weather the top is true this is the diffrent case with respect to previous one.
//g|  Y  F  F  F  F  F  T  F
// |  C  F  F  F  F  F  T  T <- Reuslt

//  in this Question we have to do as much as same like previous question in place of ? in this we have given .
// and the diffrence is  in *
//  now we have to check till previous elment of * is matching or not.

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        vector<vector<bool>> dp(s.length() + 1, vector<bool>(p.length() + 1, false));
        dp[0][0] = true;
        string str, pattern;
        str.resize(s.length() + 1);
        pattern.resize(p.length() + 1);
        str[0] = char(0);
        pattern[0] = char(0);

        for (int i = 0; i < s.length(); i++)
        {
            str[i + 1] = s[i];
        }
        for (int i = 0; i < p.length(); i++)
        {
            pattern[i + 1] = p[i];
        }

        for (int i = 1; i < pattern.length(); i++)
        {
            if (pattern[i] == '*' && dp[0][i - 2] == true)
            {
                dp[0][i] = true;
            }
        }

        for (int i = 1; i < str.length(); i++)
        {
            for (int j = 1; j < pattern.length(); j++)
            {
                if (str[i] == pattern[j] || pattern[j] == '.')
                {
                    dp[i][j] = dp[i - 1][j - 1]; // Diagonal Value
                }
                else if (pattern[j] == '*')
                {
                    dp[i][j] = dp[i][j - 2];
                    if (str[i] == pattern[j - 1] || pattern[j - 1] == '.')
                    {
                        dp[i][j] = dp[i][j - 2] || dp[i - 1][j]; // here check two on left side and the just one top of row.
                    }
                }
            }
        }

        return dp[s.length()][p.length()];
    }
};
int main()
{

    return 0;
}