#include <bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n)
{

    sort(budget, budget + n);
    int maxProfit = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxProfit = max(maxProfit, (budget[i] * (n - i)));
    }
    return maxProfit;
}
