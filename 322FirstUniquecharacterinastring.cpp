#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> m1;
        for (int i = 0; i < s.length(); i++)
        {
            m1[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (m1[s[i]] == 1)
            {

                return i;
            }
        }
        return -1;
    }
};
int main()
{

    return 0;
}