#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle == "")
        {
            return 0;
        }

        if (haystack == needle)
        {
            return 0;
        }

        int res = -1;
        for (int i = 0; i < haystack.length(); i++)
        {

            if (needle[0] == haystack[i])
            {
                if (haystack.substr(i, needle.length()) == needle)
                {
                    res = i;
                    break;
                }
                else
                {
                    res = -1;
                    
                }
            }
        }

        return res;
    }
};

int main()
{
    string name = "mississippi";
    // string name = "issip";

    cout << name.substr(5, 2);

    return 0;
}