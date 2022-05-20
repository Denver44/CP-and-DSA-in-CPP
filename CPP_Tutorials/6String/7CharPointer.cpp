#include <iostream>
#include <string.h> // this library we use in C
using namespace std;

void printer(char *ptr)
{
    cout << "Length " << strlen(ptr) << endl;
    cout << ptr << endl;
    *ptr = ' ';
}

int main()
{
    char str[1000] = "DENVER";
    printer(str + 3);
    printer(str + 4);
    cout << "STR " << str << endl;

    return 0;
}
