#include <bits/stdc++.h>
using namespace std;
void change(char input[])
{
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
}

void replacePi(char input[])
{
    if (input[0] == '\0')
        return;
    if (input[0] == 'p' && input[1] == 'i')
    {
        int size = strlen(input);
        char *helper = new char[size - 2];
        for (int i = 0; i < size - 2; ++i)
            helper[i] = input[i + 2];
        int k = 4;
        for (int i = 0; i < size - 2; ++i)
            input[k++] = helper[i];
        input[k] = '\0';
        change(input);
    }
    replacePi(++input);
}