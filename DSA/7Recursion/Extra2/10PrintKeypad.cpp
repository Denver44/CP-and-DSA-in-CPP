#include <bits/stdc++.h>
using namespace std;
void helper(int num, string psf)
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
        cout << psf << endl;
        return;
    }
    int a = num % 10;
    string s = phone[a];
    for (int i = 0; i < s.size(); i++)
    {
        helper((num / 10), s[i] + psf);
    }
    return;
}

void printKeypad(int num)
{
    helper(num, "");
    return;
}
int main()
{
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
