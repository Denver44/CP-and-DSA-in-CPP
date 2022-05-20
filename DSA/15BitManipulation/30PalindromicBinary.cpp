#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int len = 1;
    while (count < n)
    {
        len++;
        count = +(1 << (len - 1)) / 2;
    }

    return 0;
}