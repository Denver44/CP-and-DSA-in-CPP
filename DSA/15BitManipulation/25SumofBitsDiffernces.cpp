#include <iostream>
#include <vector>
using namespace std;
// eg 1-> 0001
// eg 2-> 0010
// eg 3-> 0011
// total 8 nits 01 01 10 10
// ab -> ba     10 10 01 01

int main()
{
    long n;
    cin >> n;
    long *arr = new long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long res = 0;
    for (int i = 0; i <= 31; i++)
    {
        long counton = 0;

        for (int j = 0; j < n; j++)
        {
            if ((arr[j] & (1 << i)) != 0)
            {
                counton++;
            }
        }
        long countoff = (n - counton);
        res += (counton * countoff) * 2;
    }
    cout << res << endl;

    return 0;
}