#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void helper(vector<char> &s, int left, int right)
    {
        if (left > right)
        {
            return;
        }
        else
        {
            char temp = s[left];
            s[left] = s[right - 1];
            s[right - 1] = temp;
            helper(s, left++, right--);
        }
    }

    void reverseString(vector<char> &s)
    {
        helper(s, 0, s.size());
    }
};

int main()
{
    vector<char> v1;
    v1.push_back('H');
    v1.push_back('a');
    v1.push_back('n');
    v1.push_back('n');
    v1.push_back('a');
    v1.push_back('h');

    Solution s1;
    s1.reverseString(v1);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    return 0;
}
