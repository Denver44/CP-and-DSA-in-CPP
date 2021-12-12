#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name1 = "verbose";
    string name2 = "observe";
    int a[26] = {0};
    int flag = false;

    if (name1.size() == name2.size())
    {

        for (int i = 0; i < name1.size(); i++)
        {
            a[name1[i] - 97] += 1;
        }
        for (int i = 0; i < name2.size(); i++)
        {
            a[name2[i] - 97] += -1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == -1)
            {
                flag == false;
                break;
            }
            else
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not an Anagram" << endl;
    }

    return 0;
}