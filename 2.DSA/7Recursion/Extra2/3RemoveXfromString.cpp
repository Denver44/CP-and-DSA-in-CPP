#include <bits/stdc++.h>
using namespace std;

void reomveX(char *str)
{
    if (str[0] == '\0')
        return;
    if (str[0] != 'x')
        reomveX(++str);
    else
    {
        int i = 0;
        for (; str[i] != '\0'; i++)
            str[i] = str[i + 1];
        str[i - 1] = str[i];
        reomveX(str);
    }
}

int main()
{
    char str[] = "123xxxx456xxxxx789xxx";
    reomveX(str);
    cout << str << endl;
    return 0;
}
