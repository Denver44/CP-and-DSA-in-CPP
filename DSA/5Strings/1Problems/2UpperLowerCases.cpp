#include <iostream>
using namespace std;

int main()
{
    char s[] = "durgesh";
    int i = 0;

    //********* LOWER TO UPPER CASE S *******************//
    cout << s << " -> ";
    while (s[i] != '\0')
    {
        s[i] = ((int)s[i] - 97) + 65;
        // s[i] = ((int)s[i] - 32);

        i++;
    }
    cout << s << endl;

    //********* UPEER TO LOWER CASES *******************//
    char sd[] = "RAI";
    cout << sd << " -> ";

    i = 0;
    while (sd[i] != '\0')
    {
        sd[i] += 32;
        // sd[i] = ((int)sd[i] - 65) + 97;
        i++;
    }
    cout << sd << endl;

    //********** TOOGLE IF UPPER THEN LOWER IF LOWER THEN UPPER********************//
    char p[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
    cout << p << " -> ";

    i = 0;
    while (p[i] != '\0')
    {
        if (p[i] >= 65 && p[i] <= 90)
        {
            p[i] += 32;
        }

        else if (p[i] >= 97 && p[i] <= 122)
        {
            p[i] -= 32;
        }

        else
        {
            p[i] = p[i];
        }
        i++;
    }
    cout << p << endl;
    return 0;
}