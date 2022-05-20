
#include <bits/stdc++.h>
int count(int n)
{
    if (n >= 0 && n <= 9)
    {
        return 1;
    }
    return 1 + count(n / 10);
    ;
}