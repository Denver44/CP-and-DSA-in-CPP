#include <iostream>
#include <sstream>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        // string stream ignore the whitespaces and count the words only
        // int word the last word will be there
        // so just return the length of last word.
        // stringstream str(s);
        // string word;
        // while (str >> word)
        // {
        // }

        // return word.length();

        int n = s.length();
        int res = 0;
        while (n > 0)
        {
            if (s[--n] != ' ')
            {
                res++;
            }
            else if (res > 0)
            {
                return res;
            }
        }
        return res;
    }
};

int main()
{
    Solution s1;
    cout << s1.lengthOfLastWord("a ");

    return 0;
}