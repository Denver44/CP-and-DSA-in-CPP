#include <iostream>
#include <vector>
using namespace std;

//  ------------ USING DYNAMIC PROGRAMMING APPROACH WE SOLVED THIS

//    b  a  b  a  d
//    0  1  2  3  4

// 0  1  0  1  0  0
// 1     1  0  1  0
// 2        1  0  0
// 3           1  0
// 4              1

// for string lenght of one will always a palndrome and subsrting so 00 ,11, 22 are 1
// for string lenght 2 check a[strt] == a[end] eg s[0] == s[1] then 1 else 0
// For lenght 3 first s[start] == s[end] && s[start+1][end-1] == 1
// using max lenght and startindex we find max length.

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        vector<vector<bool>> v1(n, vector<bool>(n, false));
        int maxlength = 0;
        int start;

        // String with length 1 are palindromic
        for (int i = 0; i < n; i++)
        {
            v1[i][i] = true;
            maxlength = 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                v1[i][i + 1] = true;
                maxlength = 2;
                start = i;
            }
        }
        for (int k = 3; k <= n; k++)
        {
            for (int i = 0; i < n - k + 1; i++)
            {
                int j = i + k - 1;

                if (s[i] == s[j] && v1[i + 1][j - 1])
                {
                    v1[i][j] = true;
                    if (k > maxlength)
                    {
                        maxlength = k;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxlength);
    }
};
int main()
{

    return 0;
}
