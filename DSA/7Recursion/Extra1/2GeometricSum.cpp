#include <bits/stdc++.h>
using namespace std;

void helper(int k, int i, double &res)
{
    if (i > k)
    {
        return;
    }

    res = res + 1 / (double)pow(2, i);
    helper(k, ++i, res);
}
double geometricSum(int k)
{
    double res = 0;
    helper(k, 1, res);
    return 1 + res;
}

int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
