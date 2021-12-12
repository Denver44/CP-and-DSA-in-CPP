#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int helper(int N, char prev, char pprev)
{
    if (N == 1)
        return 1;
    if (prev == 'B' && pprev == 'W')
        return helper(N - 1, 'R', 'B');
    else if (prev == 'B' && pprev == 'R')
        return helper(N - 1, 'W', 'B');
    else if (prev == 'W')
        return helper(N - 1, 'R', 'W') + helper(N - 1, 'B', 'W');
    else if (prev == 'R')
        return helper(N - 1, 'W', 'R') + helper(N - 1, 'B', 'R');
    else
        return helper(N - 1, 'R', 'B') + helper(N - 1, 'W', 'B');
}

long long find_Ways(int N)
{
    if (N == 1)
        return 2;
    else
        return helper(N, 'B', 'S');
}