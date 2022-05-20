
// Here 0 means Free Space.

//    ----Patttern---
//       0  X  ?  Y  *  Z
//s|  0  T  F  F  F  F  F
//t|  X  F  T  F  F  F  F   
//r|  A  F  F  T  F  F  F 
//i|  Y  F  F  F  T  T  F
//n|  L  F  F  F  F  T  F
//g|  M  F  F  F  F  T  F
// |  Z  F  F  F  F  T  T <- Reuslt

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// --------------------- This is question solved by dp apprach----------------
//  we make a Matrix here to solve the problem.
// Time comolexit O(m*n);
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout << fixed;
        cout << setprecision(10);

        vector<vector<bool>> dp(s.length() + 1, vector<bool>(p.length() + 1, false));
        dp[0][0] = true; // as the space of pattern and string will be true only.

        string str, pattern;
        str.resize(s.length() + 1);
        pattern.resize(p.length() + 1);
        str[0] = (char)0;
        pattern[0] = (char)0;

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
            if (pattern[i] == '*' && dp[0][i - 1] == true)
            {
                dp[0][i] = true;
            }
        }
        for (int i = 1; i < str.length(); i++)
        {
            for (int j = 1; j < pattern.length(); j++)
            {

                if (str[i] == pattern[j] || pattern[j] == '?')
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else if (pattern[j] == '*')
                {
                    dp[i][j] = (dp[i - 1][j] || dp[i][j - 1]);
                }
            }
        }

        // Always the last row and col of matrix will be the answer.
        return dp[s.length()][p.length()];
    }
};

int main()
{

    return 0;
}

//---------------------------- RECURSIVE----------------------//

// class Solution
// {
// public:
//     bool recursive(string str, string pat, int s = 0, int p = 0)
//     {

//         if (pat.length() == p) // Both are traversed
//         {
//             return str.length() == s;
//         }
//         if (str.length() == s) // if string is traversed and pattern lenggth is more than string
//         {
//             for (int i = p; i < pat.length(); i++)
//             {
//                 if (pat[i] != '*') // only  * can help us to return true as if ? then str is already traversed no more charcter to match so return false if alphabets charcters the alo false as string is already traversed
//                 {
//                     return false;
//                 }
//             }

//             return true;
//         }

//         if (pat[p] == '?' || pat[p] == str[s])
//         {
//             return recursive(str, pat, s + 1, p + 1);
//         }

//         if (pat[p] == '*')
//         {
//             return recursive(str, pat, s + 1, p) || recursive(str, pat, s, p + 1);
//         }

//         return false;
//     }
//     bool isMatch(string s, string p)
//     {

//         return recursive(s, p);
//     }
// };
