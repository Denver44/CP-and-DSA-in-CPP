#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
// As we Know a Single Charcater is itself a Palindrome.
// Here we have use a Trick
// First we take charcter and then its left and right if left and right is equal we check for further or else return.
// For oDd lenght we take One charcter.
// For even Lenght we taken two chacater at atime.
// For even Length left will be i-1.
// Right will be i+2.
int countPalindromeSubstrings(char s[])
{
    int left, right, count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        left = i - 1;
        right = i + 1;
        count += 1;
        while ((left >= 0 && right < len) && s[left] == s[right])
        {
            count++;
            left = left - 1;
            right = right + 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[i + 1])
        {
            left = i - 1;
            right = i + 2;
            count++;
            while ((left >= 0 && right < len) && s[left] == s[right])
            {
                count++;
                left = left - 1;
                right = right + 1;
            }
        }
    }
    return count;
}

int main()
{
    char input[10000];
    cin >> input;
    cout << countPalindromeSubstrings(input) << endl;
}
