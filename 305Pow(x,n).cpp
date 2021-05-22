#include <iostream>
#include <iomanip>
using namespace std;
class Solution
{
public:
    double pow(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (n % 2 == 1)
        {
            return x * pow(x * x, n / 2);
        }
        return pow(x * x, n / 2); // 2^4 = 2^2 * 2^2 == 4^2
    }
    double pow2(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (n % 2 == -1)
        {
            cout << "iam inside" << endl;
            return pow2(x * x, n / 2) / x;
        }
        return pow2(x * x, n / 2);
    }
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }

        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout << fixed;
        cout << setprecision(5);

        double res;

        if (n > 0)
        {
            res = pow(x, n);
        }
        else
        {
            res = pow2(x, n);
        }

        return res;
    }
};

int main()
{
    Solution s1;
    cout << s1.myPow(2.00000, -2);
    cout << -1 % 2 << endl;

    return 0;
}