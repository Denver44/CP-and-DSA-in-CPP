#include <iostream>
#include <sstream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {

        int n;
        cin >> n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        int j = s.size();
        for (int k = 0; k < j; k++)
        {
            if (s[k] == 52)
            {
                count++;
            }
            else
            {
                count = count;
            }
        }

        cout << count << endl;
        count = 0;
    }

    return 0;
}