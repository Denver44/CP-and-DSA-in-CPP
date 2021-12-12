#include <iostream>
#include <vector>
using namespace std;
// This Hexa value is used to mask for getting odd  0x55555555;   010101010101
// This Hexa value is used to mask for getting even   0xAAAAAAAA; 101010101010

int main()
{
    long long int n;
    cin >> n;

    long long int om = 0x55555555;
    long long int em = 0xAAAAAAAA;

    long long odd = (n & om);  // odd presverved
    long long even = (n & em); // even preserved

    odd <<= 1;  // odd becomes even
    even >>= 1; // even becomes odd

    long long int res = (odd | even); // take or of both and u get result.

    cout << res << endl;

    return 0;
}