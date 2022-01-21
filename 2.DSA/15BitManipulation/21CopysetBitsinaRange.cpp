#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long a, b;
    cin >> a >> b;
    int left, right;
    cin >> left >> right;
    long mask = (1 << (right - left + 1));
    mask--;
    mask <<= left - 1;
    long newmask = (a & mask);
    cout << (newmask | b) << endl;
    return 0;
}