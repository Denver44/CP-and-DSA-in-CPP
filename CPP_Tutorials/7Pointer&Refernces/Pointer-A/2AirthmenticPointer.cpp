#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int *p = &i;

    cout << p << endl;
    p = p + 2; // p + 2 * 4Byte
    cout << p << endl;

    p = p - 2; // p - 2 * 4Byte
    cout << p << endl;

    double d = 102.3;
    double *dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;

    char c = 'd';
    char *cp = &c;
    cout << cp << endl;
    cp++;
    cout << cp << endl;
    cp--;

    return 0;
}
