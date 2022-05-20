#include <iostream>
using namespace std;

int main()
{

    char p[] = "How areyou";
    int i = 0;
    int flag = 1;
    while (p[i] != '\0')
    {

        if (p[i] >= 65 && p[i] <= 90 || p[i] >= 97 && p[i] <= 122 || p[i] >= 48 && p[i] <= 57 || p[i] == ' ')
        {
            flag = 1;
        }

        else
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        cout << "String is valid" << endl;
    }
    else
    {
        cout << "String is not valid" << endl;
    }

    return 0;
}