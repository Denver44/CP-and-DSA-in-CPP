#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;

    while (n != 0)
    {
        int rmsb = (n & -n);
        n -= rmsb;
        counter++;
    }
    cout << counter << endl;

    return 0;
}

// If we find the right most bit of then and then subtarct the right most set bit from it then
// we wiil get the count of number of 1 in bits for n till the n not become to zero.
// it take very less time as it jumps to next 1 only as we taken the right most set bit. 