#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long int n1, n2, on1, on2;
        unsigned long long int lcm, gcd, rem;
        cin >> on1 >> on2;
        n1 = on1;
        n2 = on2;

        while (n1 % n2 != 0)
        {
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        gcd = n2;
        lcm = (on1 * on2) / gcd;
        cout << gcd << " " << lcm << endl;
    }

    return 0;
}