#include <bits/stdc++.h>
using namespace std;

int len(char *str)
{
    if (str[0] == '\0')
    {
        return 0;
    }
    return 1 + len(++str);
}

int main()
{
    char str[] = "123456789";
    cout << len(str);
    return 0;
}
