#include <iostream>
using namespace std;
// Most eaiset question
//  as here N is always Odd
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> n;
        b = (n / 2);
        a = (b + 1);
        cout << a + b << endl;
    }

    return 0;
}