#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(int n, int &tot)
{
    if (n == 0)
        return;

    if (n % 10 == 0)
        tot++;
    helper(n / 10, tot);
}

int countZeros(int n)
{
    if (n == 0)
        return 1;
    int tot = 0;
    helper(n, tot);
    return tot;
}
