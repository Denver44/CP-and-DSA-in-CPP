#include <iostream>
using namespace std;
int freqCount(int digit, int n)
{
    int count = 0;
    while (digit)
    {
        int a = digit % 10;
        (a == n) ? count++ : count = count;
        digit = digit / 10;
    }
    return count;
}

int main()
{
    int digit, n;
    cin >> digit >> n;
    int freq = freqCount(digit, n);
    cout << freq << endl;

    return 0;
}
