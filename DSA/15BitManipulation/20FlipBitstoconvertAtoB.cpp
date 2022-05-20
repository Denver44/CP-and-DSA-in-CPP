#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long a, b;
    cin >> a >> b;
    long flipped = a ^ b;
    int count = 0;
    while (flipped != 0)
    {
        long rmsb = (flipped & -flipped); // this use to get right most bit
        flipped = flipped - rmsb;         // kernighnas algorithm for count set bit.
        count++;
    }
    cout << count << endl;

    return 0;
}