#include <bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[])
{
    int len = strlen(input);
    len--;
    int i = 0;
    while (i < len) // O(N) // REVERSING THE STRING
    {
        swap(input[i++], input[len--]);
        char c = input[i];
        input[i++] = input[len];
        input[len--] = c;
    }
    len = strlen(input);
    int a_pointer, b_pointer;
    for (int i = 0; i < len; i++) // O(N) // MAKING THE WORD CORECR SAJNIN NINJAS
    {
        a_pointer = b_pointer = i;
        while (input[b_pointer] != ' ' && b_pointer < len)
            b_pointer++;
        i = b_pointer--;
        while (a_pointer < b_pointer)
        {
            char c = input[a_pointer];
            input[a_pointer++] = input[b_pointer];
            input[b_pointer--] = c;
        }
    }
}