#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[] = "findingg";
    int h = 0;
    int x = 0;

    for (int i = 0; i < strlen(name); i++)
    {

        x = 1;
        x = x << (name[i] - 97);
        if ((x & h) > 0)
        {
            cout << name[i];
        }
        else
        {
            h = h | x;
        }
    }

    return 0;
}
