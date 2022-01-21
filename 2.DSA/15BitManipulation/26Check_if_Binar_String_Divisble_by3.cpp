#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long even = 0;
    long odd = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            even += s[i] - '0';
        }
        else
        {

            odd += s[i] - '0';
        }
    }
    long delta = even - odd;
    if (delta % 11 == 0)
    {
        cout << "true" << endl;
    }
    else
    {

        cout << "false" << endl;
    }

    return 0;
}