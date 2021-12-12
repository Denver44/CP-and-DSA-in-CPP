#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Palindrome string is case insenstive i.e, A and a boht are equal.
class Solution
{
public:
    bool isPalindrome(string s)
    {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            while (isalnum(s[i]) == false && i < j)
            {
                i++;
            }
            while (isalnum(s[j]) == false && i < j)
            {
                j--;
            }
            if (toupper(s[i]) != toupper(s[j]))
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{

    if (isalnum(':'))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}