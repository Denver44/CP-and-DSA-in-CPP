#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char name1[] = "RAAR";
    int x = strlen(name1);
    int i = 0;
    char name2[x + 1];
    bool flag = false;
    while (name1[i] != '\0')
    {
        name2[x - 1 - i] = name1[i];
        i++;
    }
    name2[i] = '\0';
    cout << name2 << endl;
    int y = strlen(name2);
    i = 0;
    if (x == y)
    {

        while (name1[i] != '\0')
        {

            if (name1[i] == name2[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            i++;
        }
    }

    if (flag == true)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "not" << endl;
    }

    return 0;
}