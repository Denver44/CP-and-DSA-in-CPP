#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *input)
{
    if (input[0] == '\0')
        return;
    if (input[0] != input[1])
        removeConsecutiveDuplicates(++input);
    else
    {
        int i = 1;
        for (; input[i] != '\0'; i++)
            input[i] = input[i + 1];
        input[i - 1] = input[i];
        removeConsecutiveDuplicates(input);
    }
}

int main()
{
    char str[] = "AAAABBBBCCCC";
    removeConsecutiveDuplicates(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }

    return 0;
}
