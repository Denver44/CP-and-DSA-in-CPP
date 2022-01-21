#include <iostream>
#include <vector>
using namespace std;

int highestpowerof2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x - 1;
}
int solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int x = highestpowerof2(n);
    int bittill2x = x * (1 << (x - 1));
    int msb2xton = n - (1 << x) + 1;
    int rest = n - (1 << x);
    int ans = bittill2x + msb2xton + solve(rest);
    return ans;
}

int main()
{
    long n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}