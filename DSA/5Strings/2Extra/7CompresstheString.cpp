#include <iostream>
#include <cstring>
using namespace std;
void stringCompression(char input[])
{
    int len = strlen(input);
    int i = 0, count = 0;
    char lastch = input[0];
    while (i < len)
    {
        if (input[i] == lastch)
            count++;

        else
        {
            lastch = input[i];
            if (count > 1)
                input[i - 1] = count + 48;
            count = 1;
        }
        i++;
    }

    if (count > 1)
        input[i - 1] = count + 48;

    char *newinput = new char[len];
    int size = 0;
    newinput[size++] = input[0];
    for (int i = 1; i < len; i++)
    {
        if (input[i] == newinput[size - 1])
            continue;
        newinput[size] = input[i];
        size++;
    }
    newinput[size] = '\0';
    strcpy(input, newinput);
}
int main()
{
    int size = 1e6;
    char str[100000];
    cin.getline(str, size);
    stringCompression(str);
    cout << str;
}
