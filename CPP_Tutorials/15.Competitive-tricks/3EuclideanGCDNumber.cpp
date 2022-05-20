#include <iostream>
using namespace std;
#define ll long long

// gcd(a,0) is a.
// gcd(a,1) is a.

int gcd(ll a, ll b)
{
    if (b == 0) // the smaller number will become zero first
        return a;

    return gcd(b, a % b);
}
int main()
{
    ll a, b;
    cin >> a >> b;

    cout << gcd(a, b);
    // cout << __gcd(a, b);   STL LIBRARY

    return 0;
}
