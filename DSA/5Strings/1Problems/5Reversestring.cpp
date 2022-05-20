#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    // char name[] = "durgesh";
    // int i = 0;
    // char rev[8];
    // int size = 6;
    // while (name[i] != '\0')
    // {
    //     rev[size - i] = name[i];
    //     i++;
    // }
    // rev[8] = '\0';
    // cout << rev << endl;

    char name[] = "durgesh";
    int len = strlen("durgesh");
    len = len - 1;
    int i = 0;
    char temp;
    while (len > i)
    {
        temp = name[i];
        name[i] = name[len];
        name[len] = temp;
        i++;
        len--;
    }
    cout << name << endl;
    cout << strlen(name);

    return 0;
}