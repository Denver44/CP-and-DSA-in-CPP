#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int keypad(int num, string output[])
{

    map<int, string> phone;
    phone[2] = "abc";
    phone[3] = "def";
    phone[4] = "ghi";
    phone[5] = "jkl";
    phone[6] = "mno";
    phone[7] = "pqrs";
    phone[8] = "tuv";
    phone[9] = "wxyz";

    if (num == 0)
    {
        output[0] = "";
        return 1;
    }
    int lastdigit = num % 10;
    int size1 = keypad((num / 10), output);
    string s = phone[lastdigit];
    int k = 0;
    for (int i = 0; i < s.size(); i++)
        for (int j = 0; j < size1; j++)
            output[k++] = s[i] + output[j];

    return k; // Here we have to return the size the total number of possible letter Cominations.
}

int main()
{
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}

