#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        vector<char> v1;
        vector<char> v2;

        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '#' && v1.empty())
            {
                continue;
            }
            else if (S[i] == '#')
            {
                v1.pop_back();
            }
            else
            {
                v1.push_back(S[i]);
            }
        }
        for (int i = 0; i < T.size(); i++)
        {
            if (T[i] == '#' && v2.empty())
            {
                continue;
            }
            else if (T[i] == '#')
            {
                v2.pop_back();
            }
            else
            {
                v2.push_back(T[i]);
            }
        }
        if (v1 == v2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    return 0;
}