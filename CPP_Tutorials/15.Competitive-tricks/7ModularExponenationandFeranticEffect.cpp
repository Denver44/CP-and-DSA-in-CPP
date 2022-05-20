#include <iostream>
using namespace std;

int pow(int x, int y, int m)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y % 2 == 0)
    {
        int t = pow(x, y / 2, m);
        return ((1LL * t * t) % m);
    }
    else
    {
        int t = pow(x, y / 2, m);
        return (((1LL * t * t) % m) * x) % m;
    }
}

int main()
{

    int x, y, m;
    cin >> x >> y >> m;

    cout << pow(x, y, m);

    return 0;
}