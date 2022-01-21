#include <iostream>
#include <vector>
using namespace std;

// As of any which is power of 2 its binary repersentiion is like
// 2     1 0
// 4   1 0 0
// 8 1 0 0 0

// so for example  16 1 0 0 0 0
//  for 15 is         0 1 1 1 1
//  so if we take and operation then if we get zero then we will get the rightmost bit of n that for 16 is so this means it was power of 2.
int main()
{
    long long int n;
    cin >> n;
    long long int val = n & (n - 1);

    if (val == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}