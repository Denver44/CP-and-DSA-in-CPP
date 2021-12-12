#include <bits/stdc++.h>
using namespace std;
void helper(char first[], char second[], string s)
{
    if (first[0] == '\0' && second[0] == '\0')
    {
        cout << s << endl;
        return;
    }

    if (first[0] != '\0')
        helper(first + 1, second, s + first[0]);

    if (second[0] != '\0')
        helper(first, second + 1, s + second[0]);

    return;
}

void interleaving(char *first, char *second)
{
    helper(first, second, "");
}