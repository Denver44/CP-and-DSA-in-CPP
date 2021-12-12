
#include <iostream>
#include <cmath>
// As we have to kill every alternative member.
using namespace std;

int soln(int n)
{

    int i = 1;
    while (i * 2 <= n)
    {
        i = i * 2;
    }
    return i;
}

int main()
{
    int n;
    cin >> n;
    int hp2 = soln(n);
    int l = n - hp2;
    cout << (2 * l + 1) << endl;

    return 0;
}
