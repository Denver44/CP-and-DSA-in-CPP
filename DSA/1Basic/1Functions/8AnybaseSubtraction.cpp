#include <bits/stdc++.h>
using namespace std;

// As here we do Subtarcion
// n2 is grater than n1
// if 2-8 we do carry -1 and 2+10 =12 12-8;  ***

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    int ans = 0;
    int carry = 0;
    int power = 1;
    while (n1 > 0 || n2 > 0 || carry > 0)
    {

        int rem1 = n1 % 10;
        n1 /= 10;
        int rem2 = n2 % 10;
        n2 /= 10;
        rem2 += carry; //*** Logic is used here
        int rem;
        if (rem2 >= rem1)
        {
            carry = 0;
            rem = rem2 - rem1;
        }
        else
        {
            carry = -1;
            rem = (rem2 + b) - rem1;
        }
        ans += power * rem;
        power = power * 10;
    }
    cout << ans;

    return 0;
}