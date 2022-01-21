#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(int n, string psf)
{
    if (n == 0)
    {
        cout << psf << " ";
        return;
    }
    for (char i = psf[psf.size() - 1] + 1; i <= '9'; i++)
        helper(n - 1, psf + i);
}
void printIncreasingNumbers(int n)
{

    for (char i = '1'; i <= '9'; i++)
    {
        string s1 = "";
        s1 += i;
        helper(n - 1, s1);
    }
}
void solve()
{
    printIncreasingNumbers(2);
}

int main()
{
    solve();
    return 0;
}
