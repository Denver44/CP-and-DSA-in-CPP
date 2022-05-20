#include <iostream>
using namespace std;
#define ll long long

// to check a number is prime or not.
// Limit for n is 10^12

bool isprime(ll a)
{
    if (a == 1) // As 1 is not prime Nor Composite.
        return false;

    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ll a;
    cin >> a;
    bool check = isprime(a);

    if (check == 1)
        cout << "Prime" << endl;
    else
        cout << "Not a Prime" << endl;

    return 0;
}
