#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() == t.length())
        {

            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != t[i])
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}