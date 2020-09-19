#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int length;
    int sum = 0;

    while (t--)
    {
        cin >> n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        length = s.size();
        int first = (int)(s[0] - 48);
        int last = (int)(s[length - 1] - 48);
        int sum = first + last;
        cout << sum << endl;
    }

    return 0;
}