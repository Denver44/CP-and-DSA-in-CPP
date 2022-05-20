#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void printer(int n, int open, int close, string psf)
{
    if (psf.length() == 2 * n)
    {

        cout << psf << endl;
        return;
    }

    if (open < n)
        printer(n, open + 1, close, psf + "(");
    if (close < open)
        printer(n, open, close + 1, psf + ")");
}

void printWellFormedParanthesis(int n)
{

    printer(n, 0, 0, "");
}

void solve()
{

    printWellFormedParanthesis(3);
}

int main()
{
    solve();
    return 0;
}
