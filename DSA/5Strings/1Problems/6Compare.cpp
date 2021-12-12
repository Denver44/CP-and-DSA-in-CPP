#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char name1[] = "durgash";
    char name2[] = "DURGESH";
    bool flag = false;
    int x = strlen(name1);
    int y = strlen(name2);
    int i = 0;

    if (x == y)
    {

        while (name1[i] != '\0')
        {
            name1[i] -= 32;
            if (name1[i] == name2[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
                if (name1[i] > name2[i])
                {
                    cout << "String 1 is greater than string 2" << endl;
                }
                else
                {
                    cout << "String 2 is greater than string 1" << endl;
                }

                break;
            }
            i++;
        }
    }

    if (flag == true)
    {
        cout << "String are same" << endl;
    }
    else
    {
        cout << "String are not same" << endl;
    }

    return 0;
}

