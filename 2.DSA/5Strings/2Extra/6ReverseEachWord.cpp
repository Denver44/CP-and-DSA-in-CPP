#include <iostream>
#include <cstring>
using namespace std;
void reverseEachWord(char input[])
{

    int len = strlen(input);
    int i = 0;
    int a_pointer = 0, b_pointer = 0;
    int j = 0;
    while (input[j])
    {
        for (; input[j] != ' ' && j < len; j++)
        {
        }
        b_pointer = --j; // As to remove the whitespaces so decrement by 1.
        while (a_pointer < b_pointer)
            swap(input[a_pointer++], input[b_pointer--]);
        a_pointer = b_pointer = ++j;
    }
}
