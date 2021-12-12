#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }

        string longestCommonPrefix = strs.front(); // as we pick the first element.

        for (int i = 1; i < strs.size(); i++)
        {
            string currentword = strs.at(i);
            int j = 0;
            while (j < longestCommonPrefix.length() && j < currentword.length() && longestCommonPrefix.at(j) == currentword.at(j))
            {
                j++;
            }
            
            // if one of any one is not have a common then return "" for this we use below cond.
            if (j == 0)
            {
                return "";
            }

            longestCommonPrefix = longestCommonPrefix.substr(0, j);
        }

        return longestCommonPrefix;
    }
};

int main()
{

    return 0;
}