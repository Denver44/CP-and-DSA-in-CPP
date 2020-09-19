#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int rem = 0;
    int sum = 0;

    while (T--)
    {

        int N;
        cin >> N;
        while (N > 0)
        {
            rem = N % 10;
            sum = sum + rem;
            N = N / 10;
            rem = 0;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}

//--------------------------- Alternative method -------------

#include <iostream>

#include <sstream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int sum = 0;

    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        int j = s.size();
        for (int k = 0; k < j; k++)
        {

            int p = (int)s[k];
            int psum = p - 48;
            sum = sum + psum;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}