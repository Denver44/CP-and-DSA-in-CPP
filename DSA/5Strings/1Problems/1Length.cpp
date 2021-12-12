#include <iostream>
using namespace std;

int main()
{

    char s[] = "durgesh";
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    cout << "Size of the string " << i << endl;

    return 0;
}