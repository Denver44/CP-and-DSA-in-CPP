#include <iostream>
using namespace std;
// Always see the patterns you will ge the answer.

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }
    return 0;
}